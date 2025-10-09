// UVA 725 - Division

#include <iostream>
#include <iomanip>
#include <string>
#include <set>
using namespace std;

bool uniqueDigits(int, int);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ifstream cin("725_testcase.txt");

    double N;
    double x = 98765;
    double y = 1234;

    while(cin >> N)
    {
        bool found = false; // Identify when no solution is found for N

        if(N == 0)
            break;
        for (int denominator = y; denominator <= x / N; denominator++)
        {
            int num = denominator * N;

            // Check if digits are unique
            if (uniqueDigits(num, denominator))
            {
                cout << setw(5) << setfill('0') << num;
                cout << " / ";
                cout << setw(5) << setfill('0') << denominator;
                cout << " = " << N << endl;
                found = true;
            }
        }
        if (!found)
            cout << "There are no solutions for " << N << endl;
    }
    return 0;
}

bool uniqueDigits(int x, int y)
{
    string _y = to_string(y);

    if (to_string(y).length() != 5)
        _y = '0' + _y;
    
    string number = to_string(x) + _y;
    set<char> digits(number.begin(), number.end());

    return digits.size() == 10;
}