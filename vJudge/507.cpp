// UVA507 - Jill Rides Again

#include <iostream>
#include <vector>
// #include <fstream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ifstream cin("507_testcase.txt");

    int routes; 
    cin >> routes;

    for (int r = 1; r <= routes; r++)
    {
        int stops;
        cin >> stops;
        vector<int> roads(stops - 1);
        for (int &it : roads)
            cin >> it;

        int best_sum = 0, best_start = 0, best_end = -1;
        int current_sum = 0, current_start = 0;

        for (int i = 0; i < stops - 1; i++)
        {
            current_sum += roads[i];

            if (current_sum > best_sum || 
               (current_sum == best_sum && i - current_start > best_end - best_start))
            {
                best_sum = current_sum;
                best_start = current_start;
                best_end = i;
            }

            if (current_sum < 0)
            {
                current_sum = 0;
                current_start = i + 1;
            }
        }

        if (best_sum > 0)
            cout << "The nicest part of route " << r
                 << " is between stops " << best_start + 1
                 << " and " << best_end + 2 << "\n";
        else
            cout << "Route " << r << " has no nice parts\n";
    }
    return 0;
}
