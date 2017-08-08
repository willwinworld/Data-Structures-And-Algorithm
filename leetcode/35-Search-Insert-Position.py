#! python3
# -*- coding: utf-8 -*-


class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        length = len(nums)
        # for i in range(length):
        #     if nums[i] == target:
        #         return i
        # for j in range(length):
        #     if target < nums[0]:
        #         return 0
        #     if nums[j] < target < nums[j+1]:
        #         return j + 1
        #     if target > nums[length-1]:
        #         return length
        """
        优化：上面的时间复杂度为O(2n)，两个for循环相加，
        其实在第一个for循环的时候就可以解决所有问题
        """
        # for k in range(length):
        #   if target < nums[0]:
        #       return 0
        #   elif nums[k] < target < nums[k+1]:
        #       return k + 1
        #   elif nums[k] == target:
        #       return k
        #   elif target > nums[length-1]:
        #       return length
        """
         优化：第二种写法还是不对，错误在于当nums==[1], target==2时这样在运行到
         第一个elif会报indexerror，因为超出了列表范围
        """
        for k in range(length):
            if target < nums[0]:
                return 0
            elif nums[k] == target:
                return k
            elif target > nums[length - 1]:
                return length
            elif nums[k] < target < nums[k + 1]:
                return k + 1

        """
        所以最后一次我颠倒了一下顺序，这样就成功了
        """

if __name__ == '__main__':
    solution = Solution()
    res1 = solution.searchInsert([1,3,5,6], 5)
    res2 = solution.searchInsert([1,3,5,6], 2)
    res3 = solution.searchInsert([1,3,5,6], 7)
    res4 = solution.searchInsert([1,3,5,6], 0)
    res5 = solution.searchInsert([1], 2)
    print(res1, res2, res3, res4, res5)
