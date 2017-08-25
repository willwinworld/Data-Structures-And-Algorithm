#! python3
# -*- coding: utf-8 -*-
"""
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps.
In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.
"""
from functools import reduce


class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 1
        elif n == 2:
            return 2
        else:
            max_two_num = n // 2  # 最多2的个数
            if n % 2 == 0:
                number_all_same = 2  # 如果n是偶数个台阶，那么会多出两种情况，全部是1以及全部是2的情况
                upper_bound = max_two_num  # 如果n是偶数，那么上界number_all_same已经包含了所有2的情况
            else:
                number_all_same = 1 # 如果是奇数的情况，只会多出1种情况，全部是1的情况
                upper_bound = max_two_num + 1  # 如果n是奇数，那么上界可以包含最大2的个数的情况
            number_different = 0  # 当台阶数是有1，2混合而成时的初始值
            # print(max_two_num)
            for i in range(1, upper_bound):
                correspond_one_num = n - 2 * i
                length = i + correspond_one_num
                # print(length)
                multiply_factor = [length - x for x in range(i)]
                # print(multiply_factor)
                combine_res = reduce(lambda x, y: x * y, multiply_factor) // reduce(lambda x, y: x*y, list(range(1, i+1)))  # C(3, 2)
                number_different += combine_res
            # print(number_different)
            return number_all_same + number_different
            # max_two_num = n - 1
            # """当台阶数大于2时，先计算可以最大产生多少个连续台阶，
            # 举个简单例子，3个台阶，分别标记为0， 1， 2，那么连续的台阶组合就是(0,1)
            # (1,2)就这两种情况，以此类推，其实这个数字就是n-1，而这题其实转换一下就是
            # 在求1，2的排列组合加起来等于n的情况，那么在知道爬台阶一次走2个台阶的最大个数后，
            # 就可以基于2的个数做遍历，因为剩下都是1的情况了，那到这里，思路就很清晰了，
            # 比方说n=6,2的步数有2个，1的步数有2个，那么怎么去求这个排列组合呢？
            # 很简单，就是1个列表，有四个位置，4*3种情况，A(3,2)，高中数学"""
            # # correspond_one_num = n - 2*(n-1)
            # total = 0
            # for i in range(0, max_two_num+1):
            #     # 因为range不包括上限, i是从(0, n-1)的情况
            #     correspond_one_num = n - 2*i  # 对应的有多少个1的情况
            #     locations = i + correspond_one_num  # 列表的长度
            #     for j in range(i):
            #         # 当i==2时，0，1， len(locations) == 4, (4-0)*(4-1)
            #         multiply_factor = [locations- x for x in range(i)]
            #         combine_res = reduce(lambda x, y: x*y, multiply_factor)
            #         total += combine_res
            # return total+1


if __name__ == '__main__':
    # test = [4 - x for x in range(2)]
    # print(test)
    # print(reduce(lambda x, y: x*y, test))
    s = Solution()
    print(s.climbStairs(7))
    # print(s.climbStairs(4))
    # print(4//2)
    # i = 4
    # print(reduce(lambda x, y: x*y, list(range(1, i+1))))