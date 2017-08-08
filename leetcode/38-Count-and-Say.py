#! python3
# -*- coding: utf-8 -*-
"""
1)、1
2)、11，表示1)有1个1，组合起来就是11。
3)、21，表示2)有2个1，组合起来就是21。
4)、1211，表示3)有1个2，1个1，组合起来就是1211。
5)、111221，表示4)有1个1，1个2，2个1，组合起来就是111221。


given an integer n, generate the nth term of the count-and-say sequence
也就是说给一个整数n，返回第n的字符串
"""


class Solution(object):
    def generate(self, string):
        string_list = [x for x in string]
        res = []
        length = len(string_list)
        if length == 1:
            res.append({string: 1})
        else:
            index = 0
            while index < length:
                current = string_list[index]
                count = 1
                if index == length - 1:
                    if string_list[index] != string_list[index - 1]:
                        res.append({string_list[index]: 1})
                    break
                skip = None  # 用来跳过后续重复的index
                for follow in range(index + 1, length):
                    if current == string_list[follow]:
                        count += 1
                    else:
                        skip = follow
                        break
                res.append({string_list[index]: count})
                index += 1
                if skip:
                    index = skip
        combine = ""
        for r in res:
            single_combine = ""
            for k, v in r.items():
                single_combine = str(v) + k
            combine += single_combine
        return combine

    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        递归：首先想退出条件
        """
        base = "1"
        if n == 1:
            return base
        else:
            while n > 1:
                base = self.generate(base)
                n -= 1
            return base


if __name__ == '__main__':
    solution = Solution()
    test = solution.countAndSay(1)
    print(test)

    # test = '1211'
    # test_list = [x for x in test]
    # print(test_list)
    # seen = set()
    # non_repeat = set(test_list)
    # print(non_repeat)
    # res_dict = {}


    """
    test = '1211'
    如果相邻字符不相同，则单个统计
    如果相邻字符相同，则直到找到不相同的，或者到末尾最后一个元素
    """
    # test = '1'
    # test_list = [x for x in test]
    # print(test_list)
    # res = []
    # length = len(test_list)
    # if length == 1:
    #     res.append({test: 1})
    # else:
    #     index = 0
    #     while index < length:
    #         current = test_list[index]
    #         count = 1
    #         if index == length - 1:
    #             if test_list[index] != test_list[index-1]:
    #                 res.append({test_list[index]: 1})
    #             break
    #         skip = None  # 用来跳过后续重复的index
    #         for follow in range(index+1, length):
    #             if current == test_list[follow]:
    #                 count += 1
    #             else:
    #                 skip = follow
    #                 break
    #         res.append({test_list[index]: count})
    #         index += 1
    #         if skip:
    #             index = skip
    # combine = ""
    # for r in res:
    #     single_combine = ""
    #     for k, v in r.items():
    #         single_combine = k + str(v)
    #     combine += single_combine
    # print(combine)
    # print(type(combine))
