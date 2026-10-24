# LeetCode Problem 35: Search Insert Position

def searchInsert(nums, target):
    answer = binarySearch(nums, target)
    return answer

def binarySearch(nums, target):
    left = 0
    right = len(nums) - 1
    
    while left <= right:
        # find middle index
        mid = left + (right - left) // 2

        # return index if found
        if nums[mid] == target:
            return mid

        # search right half if target is greater
        elif nums[mid] < target:
            left = mid + 1

        # search left half if target is less
        else:
            right = mid - 1

    # left is insertion index if not found
    return left

if __name__ == "__main__":
    nums = [1, 3, 5, 6]
    target = 5
    print(searchInsert(nums, target))  # Output: 2