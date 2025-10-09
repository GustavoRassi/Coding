// UVA 10226 - Hardwood Species

#include <iostream>
#include <iomanip>
// #include <fstream>
#include <map>
using namespace std;

int main()
{
    // ifstream inFile("10226_testcase.txt");

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Initialize map to store and count the trees
    map<string, int> trees;
    string tree;
    double total = 0;
    double percentage = 0;

    // Go through every line of the txt file
    while (cin >> tree)
    {
        if (tree.empty()) // Skip empty lines
            continue;
        trees[tree]++;
        total++;
    }

    // Print out trees and it's population in percentage among all trees counted
    for (auto &t: trees)
    {
        percentage = (t.second * 100) / total;
        cout << t.first << " ";
        cout << fixed << setprecision(4) << percentage << endl;
    }

    return 0;
}