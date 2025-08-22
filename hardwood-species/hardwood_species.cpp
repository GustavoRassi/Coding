#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    ofstream outFile("trees.txt");
    outFile << "Red Alder\n";
    outFile << "Ash\n";
    outFile << "Aspen\n";
    outFile << "Basswood\n";
    outFile << "Ash\n";
    outFile << "Beech\n";
    outFile << "Yellow Birch\n";
    outFile << "Ash\n";
    outFile << "Cherry\n";
    outFile << "Cottonwood\n";
    outFile << "Ash\n";
    outFile << "Cypress\n";
    outFile << "Red Elm\n";
    outFile << "Gum\n";
    outFile << "Hackberry\n";
    outFile << "White Oak\n";
    outFile << "Hickory\n";
    outFile << "Pecan\n";
    outFile << "Hard Maple\n";
    outFile << "White Oak\n";
    outFile << "Soft Maple\n";
    outFile << "Red Oak\n";
    outFile << "Red Oak\n";
    outFile << "White Oak\n";
    outFile << "Poplan\n";
    outFile << "Sassafras\n";
    outFile << "Sycamore\n";
    outFile << "Black Walnut\n";
    outFile << "Willow";
    outFile.close();

    // Open file
    ifstream inFile("trees.txt");
    if (!inFile)
    {
        cout << "File could not open." << endl;
        return 1;
    }

    // Initialize map to store and count the trees
    map<string, int> trees;
    string tree;
    double total = 0;
    double percentage = 0;

    // Go through every line of the txt file
    while (getline(inFile, tree))
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
        cout << fixed << setprecision(4) << percentage << "%" << endl;
    }

    return 0;
}