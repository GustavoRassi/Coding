# 🧠 What I Learned
- Implemented a file `I/O` system in C++ to read and write structured data using `ifstream` and `ofstream`.
- Designed a solution for detecting common elements between two collections using `std::set`.
- Utilized set operations (insertion, membership checking, and iteration) to efficiently handle unique items.
- Applied range-based for loops for cleaner and more modern C++ iteration.
- Implemented input termination logic to handle special end-of-file markers (`0 0`).
- Strengthened problem-solving skills by applying data structures like a `set` to simulate and solve a real-world style problem (finding CDs owned by both Jack and Jill).

# 🎯 Problem Description
Jack and Jill have decided to sell some of their Compact Discs, while they still have some value. They have decided to sell one of each of the CD titles that they both own. How many CDs can Jack and Jill sell?
Neither Jack nor Jill owns more than one copy of each CD.
## Input
The input consists of a sequence of
test cases. The first line of each
test case contains two non-negative
integers N and M, each at most
one million, specifying the number
of CDs owned by Jack and by Jill, respectively. This line is followed by N lines listing the catalog numbers of the CDs owned by Jack in increasing order, and M more lines listing the catalog numbers of the CDs owned by Jill in increasing order. Each catalog number is a positive integer no greater than one billion. The input is terminated by a line containing two zeros. This last line is not a test case and should not be processed.
## Output
For each test case, output a line containing one integer, the number of CDs that Jack and Jill both own.
