# UVA 10334 - Ray Through Glasses
# Gustavo A. Rassi

MAX_N = 1000
a = [0] * (MAX_N + 1)
a[0], a[1] = 1, 2

for i in range(2, MAX_N + 1):
    a[i] = a[i-1] + a[i-2]

# Read input file
with open("vJudge/10334.txt", "r") as file:
    lines = file.readlines()

# Process each line
for line in lines:
    line = line.strip()
    if not line:  # skip empty lines
        continue
    n = int(line)
    print(a[n])