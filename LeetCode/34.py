def searchRange(nums, target):
    first = binarySearch(nums, target, True)
    last = binarySearch(nums, target, False)
    return [first, last]

def binarySearch(nums, target, find):
    left = 0
    right = len(nums) - 1
    result = -1

    while left <= right:
        mid = left + (right - left) // 2

        if nums[mid] == target:
            result = mid

            if find:
                right = mid - 1
            else:
                left = mid + 1

        elif nums[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return result

if __name__ == "__main__":
    nums = [5, 7, 7, 8, 8, 10]
    target = 8
    print(searchRange(nums, target))  # Output: [3, 4]