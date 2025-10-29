# UVA 350 - Pseudo-Random Numbers
# Gustavo A. Rassi

case_number = 1

# Open the file and read lines
with open("vJudge/350testcase.txt", "r") as file:
    lines = file.readlines()

for line in lines:
    # Split into integers
    Z, I, M, L = map(int, line.strip().split())
    
    # End of input
    if Z == 0 and I == 0 and M == 0 and L == 0:
        break
    
    seen = {}  # Store first occurrence index
    sequence_length = 0
    current = L
    
    while current not in seen:
        seen[current] = sequence_length
        sequence_length += 1
        current = (Z * current + I) % M
    
    # Number of unique numbers before repeat
    cycle_length = sequence_length - seen[current]
    
    print(f"Case {case_number}: {cycle_length}")
    case_number += 1
