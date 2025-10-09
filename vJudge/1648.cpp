// UVA 1648 - Dynamic Range Sum Queries [Fenwick Tree]

#include <iostream>
// #include <fstream>
#include <vector>
using namespace std;

class FenwickTree {
    vector<long long> tree;
    int n;
    public:
        FenwickTree(int size) : n(size)
        {
            tree.assign(n + 1, 0);
        }

        void add(int index, long long value)
        {
            while (index <= n)
            {
                tree[index] += value;
                index += index & -index;
            }
        }

        long long sum(int index)
        {
            long long result = 0;
            while (index > 0)
            {
                result += tree[index];
                index -= index & -index;
            }
            return result;
        }

        long long range_sum(int l, int r)
        {
            return sum(r) - sum(l - 1);
        }
};

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ifstream cin("1648_testcase.txt");

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n + 1);
    FenwickTree ft(n);

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        ft.add(i, arr[i]);
    }

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int k;
            long long u;
            cin >> k >> u;
            long long delta = u - arr[k];
            arr[k] = u;
            ft.add(k, delta);
        } 
        else
        {
            int a, b;
            cin >> a >> b;
            cout << ft.range_sum(a, b) << endl;
        }
    }

    return 0;
}
