# UVA 10541 - Stripe
# Gustavo A. Rassi

import math

def count_rectangles(N, K, code):
    if K == 0:
        # All white squares means only one possible rectangle
        return 1

    total_black = sum(code)
    required_white = K - 1
    min_needed = total_black + required_white

    # If the code needs more squares than exist, it's impossible
    if min_needed > N:
        return 0

    extra_whites = N - min_needed
    gaps = K + 1  # before first group, between groups, after last

    return math.comb(extra_whites + gaps - 1, gaps - 1)


# Read from file
with open("vJudge/10541.txt", "r") as file:
    lines = [line.strip() for line in file if line.strip()]  # skip blank lines

t = int(lines[0])  # number of test cases
index = 1

for _ in range(t):
    parts = list(map(int, lines[index].split()))
    index += 1
    N = parts[0]
    K = parts[1]
    if K > 0:
        code = parts[2:]
    else:
        code = []
    print(count_rectangles(N, K, code))