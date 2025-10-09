// UVA 11849 - CD

#include <set>
#include <iostream>
// #include <fstream>
using namespace std;

int main()
{
    set<int> jack; // Jack's cds
    set<int> jill; // Jills cd's
    int n, m; // Number of cd's of Jack and Jill

    // ifstream cin("cd.txt");

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Read txt file by line
    while(cin >> n >> m)
    {
        if (n == 0 && m == 0) // cin gets to the end (0 0)
            break;
        
        // Read Jack's cds
        for(int i = 0; i < n; i++)
        {
            int cd;
            cin >> cd;
            jack.insert(cd);
        }

        // Read Jill's cds
        for (int x = 0; x < m; x++)
        {
            int cd;
            cin >> cd;
            jill.insert(cd);
        }
    }
    
    // Look for intersection
    int count = 0;
    for (int i: jack)
        if (jill.count(i)) // Count every time they have a cd in common
            count++;

    // Output
    cout << count << endl;

    return 0;
}