// UVA11292 - Dragon of Loowater

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("11292_testcase.txt");
    if (!inFile)
    {
        cout << "File could not open\n";
        return -1;
    }

    cout << "Hello world\n";
    
    return 0;
}