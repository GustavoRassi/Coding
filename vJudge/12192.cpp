#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream inFile("12192_testcase.txt");
    if (!inFile)
    {
        cout << "Could not open file\n";
        return -1;
    }

    int n, k;
    while (inFile >> n >> k)
    {
        if (n == 0 && k == 0)
            break;
        
    }
    
    return 0;
}