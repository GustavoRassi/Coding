#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> connectedComponents(vector<pair<int,int> >& edges)
{
    // Find maximum node value
    int maxNode = 0;
    for (auto &e : edges)
        maxNode = max({maxNode, e.first, e.second});

    // Build adjacency list
    vector<vector<int> > adj(maxNode + 1);
    for (auto &e : edges)
    {
        int u = e.first, v = e.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // BFS/DFS to find connected components
    vector<bool> visited(maxNode + 1, false);
    int minComp = INT_MAX, maxComp = 0;

    for (int i = 1; i <= maxNode; i++)
    {
        if (!visited[i] && !adj[i].empty())
        {
            // BFS
            int count = 0;
            queue<int> q;
            q.push(i);
            visited[i] = true;

            while (!q.empty()) 
            {
                int node = q.front(); q.pop();
                count++;
                for (int nei : adj[node])
                {
                    if (!visited[nei])
                    {
                        visited[nei] = true;
                        q.push(nei);
                    }
                }
            }

            if (count >= 2)
            {
                minComp = min(minComp, count);
                maxComp = max(maxComp, count);
            }
        }
    }

    return vector<int>{minComp, maxComp};
}

int main()
{
    ifstream inFile("componentsgraph_testcase.txt");
    if (!inFile)
    {
        cout << "File could not open\n";
        return -1;
    }

    int n; // number of edges
    inFile >> n;
    
    

    vector<pair<int,int> > edges(n);
    for (int i = 0; i < n; i++)
        inFile >> edges[i].first >> edges[i].second;

    vector<int> ans = connectedComponents(edges);
    cout << ans[0] << " " << ans[1] << "\n";

    return 0;
}
