def hammingWeight(n):
    # convert n into binary
    binary = bin(n)[2:]
    count = 0

    # increment count by one every time we see a bit set
    for bit in binary:
        if bit == '1':
            count = count + 1
    return count

if __name__ == "__main__":
    n = 11
    print(hammingWeight(n))  # Output: 3