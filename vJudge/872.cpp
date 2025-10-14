// UVA 872 - Ordering

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
using namespace std;

map<char, vector<char>> graph;
map<char, int> indegree;
vector<char> vars;
vector<char> order;
set<string> results;

void dfs()
{
    if (order.size() == vars.size())
    {
        string s(order.begin(), order.end());
        results.insert(s);
        return;
    }

    for (char v : vars)
    {
        if (indegree[v] == 0 && find(order.begin(), order.end(), v) == order.end())
        {
            order.push_back(v);
            for (char nei : graph[v])
                indegree[nei]--;
            dfs();
            for (char nei : graph[v])
                indegree[nei]++;
            order.pop_back();
        }
    }
}

int main()
{
    // ifstream cin("872_tc.txt");
    // if (!cin)
    // {
    //     cout << "Could not open file\n";
    //     return -1;
    // }

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string line;
    cin >> t;
    getline(cin, line); // Get newline

    while (t--)
    {
        getline(cin, line); // Space line
        getline(cin, line); // Variables line
        stringstream ss(line);
        vars.clear();
        graph.clear();
        indegree.clear();
        order.clear();
        results.clear();

        char v;
        while (ss >> v)
            vars.push_back(v);
        sort(vars.begin(), vars.end());

        getline(cin, line); // Constraints line
        stringstream ss2(line);
        string con;
        while (ss2 >> con)
        {
            char u = con[0], v = con[2];
            graph[u].push_back(v);
            indegree[v]++;
        }

        dfs();

        if (results.empty())
            cout << "NO\n";
        else
        {
            for (auto &s : results)
            {
                for (int i = 0; i < s.size(); i++)
                {
                    if (i)
                        cout << " ";
                    cout << s[i];
                }
                cout << "\n";
            }
        }

        if (t)
            cout << "\n";
    }

    return 0;
}
