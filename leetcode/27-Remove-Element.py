#! python3
# -*- coding: utf-8 -*-


class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val:  int
        :rtype: int
        """
        for i in nums:
            if i == val:
                nums.remove(i)
        for j in reversed(nums):
            if j == val:
                nums.remove(j)
        length = len(nums)
        print(nums)
        return length

    def standard_algorithm_1(self, nums, val):
        i = 0
        for j, value in enumerate(nums):
            if nums[j] != val:
                nums[i] = nums[j]
                i += 1
        print(nums)
        return i

    def standard_algorithm_2(self, nums, val):
        n = len(nums)
        i = 0
        while i < n:
            if nums[i] == val:
                nums[n-1] = nums[i]
                n -= 1
            else:
                i += 1
        print(nums)
        return n

if __name__ == '__main__':
    solution = Solution()
    solution.removeElement([3, 2, 2, 3], 2)
    solution.standard_algorithm_1([3, 2, 2, 3], 2)
