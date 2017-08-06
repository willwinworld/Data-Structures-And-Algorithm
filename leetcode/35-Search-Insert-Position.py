#! python3
# -*- coding: utf-8 -*-


class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i = 0
        length = len(nums)
        for j in range(1, length):
            if nums[i] == target:
                return i
            elif nums[j] == target:
                return j
            elif nums[i] < target:
                i += 1
                if target < nums[j]:
                    return i


if __name__ == '__main__':
    solution = Solution()
    res = solution.searchInsert([1, 3, 5, 6], 0)
    print(res)

