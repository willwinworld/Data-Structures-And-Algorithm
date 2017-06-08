#! python3
# -*- coding: utf-8 -*-


def twoSum(nums, target):
    length = len(nums)
    for i in range(0, length-1):
        for j in range(1, length):
            if i != j:
                if nums[i] + nums[j] == target:
                    return [i, j]
"""空间复杂度太高，考虑采用二分法"""

if __name__ == '__main__':
    res = twoSum([2, 5, 5, 11], 10)
    print(res)