// UVA 108 - Maximum Sum

#include <iostream>
#include <vector>
// #include <fstream>
using namespace std;

int main()
{
    // ifstream cin("108testcase.txt");

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int> > matrix(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];

    int max_sum = INT_MIN;

    // Fix top_row row
    for (int top_row = 0; top_row < N; top_row++)
    {
        vector<int> temp(N, 0); // Cumulative column sums

        for (int bottom_row = top_row; bottom_row < N; bottom_row++)
        {
            // Add current row to temp
            for (int column = 0; column < N; column++)
                temp[column] += matrix[bottom_row][column];

            // Kadane's algorithm on temp
            int current_sum = temp[0];
            int best_sum = temp[0];
            for (int k = 1; k < N; k++)
            {
                current_sum = max(temp[k], current_sum + temp[k]);
                best_sum = max(best_sum, current_sum);
            }

            max_sum = max(max_sum, best_sum);
        }
    }
    cout << max_sum << endl;

    return 0;
}
