// LeetCode 2521 - Distinct Prime Factors of Product of Array

#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> nums = {2, 4, 3, 7, 10, 6};
    set<int> primes;

    for (int n : nums)
    {
        int d = 2;
        while (d * d <= n)
        {
            while (n % d == 0)
            {
                primes.insert(d);
                n /= d;
            }
            d++;
        }
        if (n > 1)
            primes.insert(n);
    }
    cout << "Number of distinct prime factors: " << primes.size() << endl;

    return 0;
}