// UVA 336 - A Node Too Far 

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <queue>
#include <iomanip>
#include <set>
using namespace std;

int bfs(map<int, vector<int>> &graph, int start, int ttl)
{
    if (graph.find(start) == graph.end()) return 0; // start node not in graph

    queue<pair<int, int>> q;
    set<int> visited;

    q.push({start, 0});
    visited.insert(start);

    while (!q.empty())
    {
        auto [node, depth] = q.front();
        q.pop();

        if (depth == ttl)
            continue;

        for (int neighbor : graph[node])
        {
            if (!visited.count(neighbor))
            {
                visited.insert(neighbor);
                q.push({neighbor, depth + 1});
            }
        }
    }

    return visited.size();
}

int main() {
    // ifstream cin("336_tc.txt");
    // if (!cin) {
    //     cerr << "Error: could not open input.txt" << endl;
    //     return 1;
    // }

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int NC;
    int caseNum = 1;

    while (cin >> NC && NC != 0)
    {
        map<int, vector<int>> graph;
        for (int i = 0; i < NC; ++i)
        {
            int a, b;
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        int start, ttl;
        while (cin >> start >> ttl)
        {
            if (start == 0 && ttl == 0) break;

            int reachable = bfs(graph, start, ttl);
            int totalNodes = graph.size();
            int notReachable = totalNodes - reachable;

            cout << "Case " << caseNum++
                 << ": " << notReachable
                 << " nodes not reachable from node " << start
                 << " with TTL = " << ttl << "." << endl;
        }
    }

    return 0;
}
