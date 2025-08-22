# 🧠 What I Learned
- File I/O: Write to files using ofstream and read line by line using ifstream and getline().
- Maps (map<string,int>): Counted the frequency of each tree species efficiently. Learned that accessing a non-existent key initializes it to 0.
- Loops and conditionals: Used while loops to process file lines and continue to skip blank lines.
- Data types and arithmetic: Used double to handle percentages and avoid integer division errors.
- Percentage calculation: Calculated frequency percentages for each tree species.
- Output formatting: Applied fixed and setprecision to format decimal output neatly.
- Project integration: Combined multiple skills (file handling, data structures, loops, arithmetic, formatting) to solve a real world data analysis problem.
- Programming patterns: Practiced frequency counting and percentage calculations, as seen in statistics and data analysis.

# 🎯 Problem Description
Hardwoods are the botanical group of trees that have broad leaves, produce a fruit or nut, and generally go dormant in the winter.
America’s temperate climates produce forests with hundreds of hardwood species, trees that share certain biological characteristics. Although oak, maple and cherry all are types of hardwood trees, for example, they are different species. Together, all the hardwood species represent 40 percent of the trees in the United States.
On the other hand, softwoods, or conifers, from the Latin word meaning “cone-bearing”, have needles. Widely available US softwoods include cedar, fir, hemlock, pine, redwood, spruce and cypress. In a home, the softwoods are used primarily as structural lumber such as 2×4s and 2×6s, with some limited decorative applications.
Using satellite imaging technology, the Department of Natural Resources has compiled an inventory of every tree standing on a particular day. You are to compute the total fraction of the tree population represented by each species.
## Input
The first line is the number of test cases, followed by a blank line.
Each test case of your program consists of a list of the species of every tree observed by the satellite;
one tree per line. No species name exceeds 30 characters. There are no more than 10,000 species and no more than 1,000,000 trees.
There is a blank line between each consecutive test cases.
## Output
For each test case print the name of each species represented in the population, in alphabetical order, followed by the percentage of the population it represents, to 4 decimal places.
Print a blank line between 2 consecutive test cases.
