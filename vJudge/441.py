# UVA 441 - Lotto

from itertools import combinations

def main():
    # Open and read the file
    file = "441_tc.txt"
    with open(file, "r") as cin:
        lines = cin.readlines()
    
    first_case = True
    for line in lines:
        nums = list(map(int, line.split()))
        k = nums[0]
        if k == 0:
            break
        S = nums[1:]
        
        # Separate test cases with one blank line
        if not first_case:
            print()
        first_case = False
        
        # Generate and print all 6-number combinations
        for combo in combinations(S, 6):
            print(" ".join(map(str, combo)))

if __name__ == "__main__":
    main()
