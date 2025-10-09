// UVA 469 - Wetlands of Florida [DFS-like]

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

// DFS to count connected 'W' cells (lake area)
int dfs(vector<string> &grid, int r, int c, int n, int m) {
    // If out of bounds or not water, stop
    if (r < 0 || c < 0 || r >= n || c >= m || grid[r][c] != 'W')
        return 0;

    grid[r][c] = '.'; // mark as visited
    int count = 1;

    // Explore all 8 directions
    for (int dr = -1; dr <= 1; dr++)
        for (int dc = -1; dc <= 1; dc++)
            if (dr != 0 || dc != 0)
                count += dfs(grid, r + dr, c + dc, n, m);
    return count;
}

int main()
{
    // ifstream cin("469_tc.txt"); // open the input file
    // if (!cin) {
    //     cerr << "Error: could not open input.txt" << endl;
    //     return 1;
    // }

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string line;

    cin >> t; // read number of test cases
    getline(cin, line); // consume the rest of the line
    getline(cin, line); // skip blank line

    while (t--)
    {
        vector<string> grid;
        
        // Read grid (lines of L and W)
        while (getline(cin, line))
        {
            if (line.empty()) break;
            if (line[0] != 'L' && line[0] != 'W') break;
            grid.push_back(line);
        }

        vector<pair<int, int>> queries;

        // Read queries
        while (!line.empty())
        {
            stringstream ss(line);
            int r, c;
            if (!(ss >> r >> c)) break;
            queries.push_back({r, c});

            if (!getline(cin, line) || line.empty())
                break;
        }

        // Process each query
        for (auto [r, c] : queries)
        {
            vector<string> tempGrid = grid; // copy grid for each query
            cout << dfs(tempGrid, r - 1, c - 1, tempGrid.size(), tempGrid[0].size()) << endl;
        }

        if (t)
            cout << endl; // blank line between test cases
    }

    return 0;
}
