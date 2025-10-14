// UVA 11742 - Social Constraints

#include <iostream>
#include <numeric>
// #include <fstream>
#include <vector>
using namespace std;

struct Constraint {
    int a, b, c;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ifstream cin("11742_testcase.txt");
    // if (!cin)
    // {
    //     cout << "File could not open\n";
    //     return -1;
    // }
    int n, m;
    while (cin >> n >> m) 
    {
        if (n == 0 && m == 0)
            break;

        vector<Constraint> constraints(m);
        for (int i = 0; i < m; i++) 
            cin >> constraints[i].a >> constraints[i].b >> constraints[i].c;

        vector<int> perm(n);
        iota(perm.begin(), perm.end(), 0);
        int count = 0;

        do 
        {
            // store positions of each teenager
            vector<int> pos(n);
            for (int i = 0; i < n; i++)
                pos[perm[i]] = i;

            bool valid = true;
            for (auto con : constraints) 
            {
                int dist = abs(pos[con.a] - pos[con.b]);

                if (con.c > 0 && dist > con.c) 
                    valid = false;
                if (con.c < 0 && dist < -con.c) 
                    valid = false;
                if (!valid) break;
            }

            if (valid)
                count++;

        } while (next_permutation(perm.begin(), perm.end()));

        cout << count << endl;
    }

    return 0;
}
