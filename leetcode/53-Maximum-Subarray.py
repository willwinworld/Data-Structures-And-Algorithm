#! python3
# -*- coding: utf-8 -*-
"""
[-2,1,-3,4,-1,2,1,-5,4]  # [4,-1,2,1]最大和sum=6
找到相邻元素的最大和子串
对于数组分为两个大小基本相等的部分，那么最大和集必然出现在以下三种情况下：
1.最大和集出现在前半部分内，或者是整个前半部分;
2.最大和集出现在后半部分内，或者是整个后半部分;
3.如果过既不出现在前半部分，也不出现在后半部分，那么最大和必然横跨前半部分和后半部分，
4.所以前半部分(假设a)和后半部分(假设b)的分割点(假设i)必然包含在最大和集中，那么这时候只需要以i
为起点向前求其最大和集(c1)，向后求其最大和集(c2),那么这种情况下最大和集为c1+c2;
所以最大和集的求法即可采用分治算法，递归求出数组前半部分，后半部分，和整个部分的最大值即可。
"""


class Solution(object):
    """
    divide and conquer

    """
    def maxSubArray(self, nums, low, high):
        if low == high:
            return nums[0]

        mid = int((low + high) / 2)
        left_max = -2147483648
        sum = 0
        for i in range(mid, low-1, -1):
            sum += nums[i]
            if sum > left_max:
                left_max = sum

        right_max = -2147483648
        sum = 0
        for i in range(mid+1, high+1, 1):
            sum += nums[i]
            if sum > right_max:
                right_max = sum

        max_left_right = max(self.maxSubArray(nums, low, mid), self.maxSubArray(nums, mid+1, high))
        return max(max_left_right, left_max+right_max)


def merge(l, r):
    final = []
    while l and r:
        if l[0] <= r[0]:
            final.append(l.pop(0))
        else:
            final.append(r.pop(0))
    return final+l+r

def mergeSort(List):
    if len(List) <= 1:
        return List
    else:
        middle = int(len(List)/2)
        sorted_left = mergeSort(List[:middle])
        sorted_right = mergeSort(List[middle:])
        return merge(sorted_left, sorted_right)


def kadane(a):
    max_ending_here = max_so_far = a[0]
    for x in a[1:]:
        """
        在每一个扫描点计算以该点数值为结束点的子数列的最大和（正数和）
        """
        max_ending_here = max(x, x+max_ending_here)
        max_so_far = max(max_ending_here, max_so_far)
    return max_so_far

if __name__ == '__main__':
    # test = mergeSort([-2,1,-3,4,-1,2,1,-5,4])
    # print(test)
    # res = kadane([-2,1,-3,4,-1,2,1,-5,4])  # [4,-1,2,1]
    # print(res)
    # for i in range(5, -1, -1):
    #     print(i)
    solution = Solution()
    res = solution.maxSubArray([-2,1,-3,4,-1,2,1,-5,4], 0, 8)
    print(res)
