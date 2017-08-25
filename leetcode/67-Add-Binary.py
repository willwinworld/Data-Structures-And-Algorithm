#! python3
# -*- coding: utf-8 -*-
import itertools
from functools import reduce
"""
Given two binary strings, return their sum (also a binary string).

For example,
a = "11"
b = "1"
Return "100".
"""


class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        a_list = [x for x in a][::-1]
        b_list = [x for x in b][::-1]

        """
        转化成十进制
        """
        a_sum = 0
        for a in range(len(a_list)):
            if a_list[a] == '1':
                a_sum += 2**a

        b_sum = 0
        for b in range(len(b_list)):
            if b_list[b] == '1':
                b_sum += 2**b

        print(a_sum, b_sum)

        total_sum = a_sum + b_sum

        """
        转换成二进制
        """
        if total_sum == 0:
            return 0
        remainder = []
        while total_sum != 0:
            remainder.insert(0, total_sum % 2)
            total_sum = total_sum // 2

        """
        转换成字符串
        """
        convert_to_str = map(lambda x: str(x), remainder)
        res = ''.join(convert_to_str)
        print(res)
        return res


if __name__ == '__main__':
    s = Solution()
    s.addBinary("0", "0")

