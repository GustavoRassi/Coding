#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

bool isValid(string);

int main()
{
    ifstream inFile("20_testcases.txt");
    string testcase;

    while (getline(inFile, testcase))
    {
        if(isValid(testcase))
            cout << testcase << ": Valid\n";
        else
            cout << testcase << ": Not Valid\n";
    }
    
    return 0;
}

bool isValid(string s)
{
    if (s.empty())
            return false;

    stack<char> input;

    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            input.push(s[i]);
        else if (input.top() == '(' && s[i] == ')')
            input.pop();
        else if (input.top() == '{' && s[i] == '}')
            input.pop();
        else if (input.top() == '[' && s[i] == ']')
            input.pop();
        else
            return false;
    }
    return true;
}