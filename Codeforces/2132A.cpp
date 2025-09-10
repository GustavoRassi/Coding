#include <iostream>
#include <deque>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream outFile("2132A_testcase.txt");
    outFile << "4\n";
    outFile << "2\n";
    outFile << "ot\n";
    outFile << "2\n";
    outFile << "ad\n";
    outFile << "DV\n";
    outFile << "3\n";
    outFile << "efo\n";
    outFile << "7\n";
    outFile << "rdcoecs\n";
    outFile << "DVDVDVD\n";
    outFile << "3\n";
    outFile << "aca\n";
    outFile << "4\n";
    outFile << "bbaa\n";
    outFile << "DVDV\n";
    outFile << "3\n";
    outFile << "biz\n";
    outFile << "4\n";
    outFile << "abon\n";
    outFile << "VVDD";
    outFile.close();
    
    int testcases; // number of test cases
    ifstream inFile("2132A_testcase.txt");
    
    if (!inFile)
    {
        cout << "File could not open\n";
        return 1;
    }
    else
    {
        inFile >> testcases;

        while (testcases--)
        {
            int initial_length, extra_length;
            string initial_word, extra_chars, assign;

            inFile >> initial_length;   
            inFile >> initial_word;   
            inFile >> extra_length;   
            inFile >> extra_chars;  
            inFile >> assign;

            // store result in a deque
            deque<char> result(initial_word.begin(), initial_word.end());

            // process each character
            for (int i = 0; i < extra_length; i++)
            {
                if (assign[i] == 'V')
                    // Vlad inserts at the front
                    result.push_front(extra_chars[i]);
                else 
                    // Dima inserts at the back
                    result.push_back(extra_chars[i]);
            }
            // convert deque back to string for output
            string final_result(result.begin(), result.end());
            cout << final_result << endl;
        }
    }

    return 0;
}
