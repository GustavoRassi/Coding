#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string input = "efo";
    ofstream outFile("testcase.txt");
    outFile << "2\n";
    outFile << "ot\n";
    outFile << "2\n";
    outFile << "ad\n";
    outFile << "DV";
    outFile.close();

    ifstream inFile("testcase.txt");
    if (!inFile)

    return 0;
}