#! python3
# -*- coding: utf-8 -*-


class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # seen = set()
        # seen_add = seen.add
        # res = [x for x in nums if not (x in seen or seen_add(x))]
        # return res
        length = len(nums)
        if length < 2:
            return length
        else:
            i = 0
            for j in range(1, length):
                if nums[i] != nums[j]:
                    i += 1
                    nums[i] = nums[j]
            print(nums[0: i+1])
            return i+1
"""
since the array is already sorted.we can keep two pointers i and j.
where i is the slow-runner while j is the faster runner.As long as
nums[i] == nums[j], we increase j to skip the duplicate.
when we encounter nums[i] != nums[j]. the duplicate run has ended so we
must copy its value to nums[i+1]. i is then incremented and repeat the 
same process again until j reaches the end of array.
"""

if __name__ == '__main__':
    solution = Solution()
    result = solution.removeDuplicates([1, 1, 2])
    print(result)

