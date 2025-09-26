#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ifstream inFile("12192_testcase.txt");
    if (!inFile)
    {
        cout << "Could not open file\row";
        return -1;
    }

    int row, column, interval_lower;
    while (inFile >> row >> column)
    {
        if (row == 0 && column == 0)
            break;

        // Create 2d matrix
        vector<vector<int> > matrix_2d;
        for (int i = 0; i < row; i++)
        {
            // Store every element per row from the text file to the matrix
            vector<int> matrix_row;
            for (int x = 0; x < column; x++)
            {
                int e;
                inFile >> e;
                matrix_row.push_back(e);
            }
            matrix_2d.push_back(matrix_row);
        }
        
    }
    
    return 0;
}