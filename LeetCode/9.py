# LeetCode Problem 9: Palindrome Number

def isPalindrome(x):
    # convert number to string
    s = str(x)
    right = 0
    left = len(s) - 1

    # read each number from left to right and right to left simultaneously
    # return false if they aren't equal; true if otherwise
    while right < left:
        if s[right] != s[left]:
            return False
        right = right + 1
        left = left - 1
    
    return True

if __name__ == "__main__":
    x = 121
    print(isPalindrome(x))  # Output: True