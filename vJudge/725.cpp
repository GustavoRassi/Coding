#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <set>
#include <thread>
#include <chrono>
using namespace std;

bool uniqueDigits(int, int);

int main()
{
    ifstream inFile("725_testcase.txt");
    if(!inFile)
    {
        cout << "File could not open\n";
        return 1;
    }

    double N;
    double x = 98765;
    double y = 1234;

    cout << "y: " << y << endl;
    cout << "x: " << x << endl;

    while(inFile >> N)
    {
        bool found = false; // Identify when no solution is found for N

        if(N == 0)
            break;
        for (int denominator = y; denominator <= x / N; denominator++)
        {
            int num = denominator * N;

            // Check if digits are unique
            cout << "check if unique digits...\n";
            cout << num << " " << denominator << endl;
            this_thread::sleep_for(chrono::seconds(2));

            if (uniqueDigits(num, denominator))
            {
                cout << "Entered if condition\n";
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
    cout << "string length: " << to_string(y).length() << endl;
    this_thread::sleep_for(chrono::seconds(2));
    string _y = to_string(y);
    if (to_string(y).length() != 5)
    {
        _y = '0' + _y;
        cout << "Length after if condition: " << _y.length() << endl;
    }
    
    string number = to_string(x) + _y;

    cout << "Number: " << number << endl;
    
    set<char> digits(number.begin(), number.end());
    cout << "Digits size: " << digits.size() << endl;
    
    if (digits.size() == 10)
        cout << "True\n";
    else
        cout << "false\n";
    this_thread::sleep_for(chrono::seconds(2));
    return digits.size() == 10;
}