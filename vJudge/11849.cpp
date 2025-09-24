// UVA11849 - CD

#include <set>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    set<int> jack; // Jack's cds
    set<int> jill; // Jills cd's
    int n, m; // Number of cd's of Jack and Jill

    // Check if file opens
    ifstream inFile("cd.txt");
    if(!inFile)
    {
        cout << "File could not open." << endl;
        return 1;
    }

    // Read txt file by line
    while(inFile >> n >> m)
    {
        if (n == 0 && m == 0) // inFile gets to the end (0 0)
            break;
        
        // Read Jack's cds
        for(int i = 0; i < n; i++)
        {
            int cd;
            inFile >> cd;
            jack.insert(cd);
        }

        // Read Jill's cds
        for (int x = 0; x < m; x++)
        {
            int cd;
            inFile >> cd;
            jill.insert(cd);
        }
    }
    
    // Look for intersection
    int count = 0;
    for (int i: jack)
        if (jill.count(i)) // Count every time they have a cd in common
            count++;

    // Output
    cout << count << endl;

    return 0;
}