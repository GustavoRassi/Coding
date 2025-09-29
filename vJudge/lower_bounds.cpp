// This file is for practice purposes: practicing lower/upper bound functions

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Array of integers
    vector<int> H = {20, 10, 22, 43, 21};
    int query[] = {22, 50};

    // Returns the iterators that point to the smallest and largest number within the interval
    auto it = lower_bound(H.begin(), H.end(), query[0]);
    auto it_2 = upper_bound(H.begin(), H.end(), query[1]);

    // Returns the distance in index value from the beginning of the array
    int start = it - H.begin();
    int end = it_2 - H.begin();

    cout << "INTERVAL: [22, 50]\n";

    // Prints out the numbers within the interval
    for (int i = start; i < end; i++)
        cout << H[i] << " ";
    
    return 0;
}