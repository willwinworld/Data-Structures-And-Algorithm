#! python3
# -*- coding: utf-8 -*-
"""
一个列表中有许多个字符串，写一个function找出这些字符串中最长的共同字首
['abcd', 'abccc', 'abdec'] --> 共同字首为'ab'
重点考察for else的作用
"""


# def longestCommonPrefix(strs):  # 无法解决['aa', 'aab']， 错误方案
#     length = len(strs)
#     if length == 0:
#         return "empty"
#     elif length == 1:
#         return strs[0]
#     elif length == 2:
#         mutual_list = [s for s in strs[0] if s in strs[1]]
#         print(mutual_list)
#         if len(mutual_list) == 0:
#             first_second_mutual = "empty"
#         else:
#             first_second_mutual = ''.join([s for s in strs[0] if s in strs[1]])
#         return first_second_mutual
#     else:
#         first_second_mutual = ''.join([s for s in strs[0] if s in strs[1]])
#         first_second_mutual_length = len(first_second_mutual)
#         end = 1
#         parts = []
#         while end < first_second_mutual_length:
#             part = first_second_mutual[0:end]
#             parts.append(part)
#             end += 1
#         parts.append(first_second_mutual)  # 得到列表前两项的公有部分所有字符组合['a', 'ab', 'abc']
#         reversed_parts = parts[::-1]
#         for part in reversed_parts:
#             for i in range(2, length):
#                 if part not in strs[i]:
#                     break
#             else:
#                 return part
#
#
# def common_start(s1, s2):
#     def _iter():
#         for a, b in zip(s1, s2):
#             if a == b:
#                 yield a
#             else:
#                 return
#
#     return ''.join(_iter())
"""zip性质:等长时会一一对应形成tuple,不等长时会以较短的为基准，
还有就是解包机制的运用"""


def longestCommonPrefix(strs):
    prefix = ''
    for z in zip(*strs):
        bag = set(z)
        if len(bag) == 1:
            prefix += bag.pop()
        else:
            break
    return prefix


if __name__ == '__main__':
    """测试集:
             []
             ['a']
             ['a', 'b']
             ['abcd', 'abccc', 'abdec']
    """
    # res1 = longestCommonPrefix([])
    # res2 = longestCommonPrefix(['a'])
    # res3 = longestCommonPrefix(['a', 'b'])
    # res4 = longestCommonPrefix(['abcd', 'abccc', 'abdec'])
    # print(res1)
    # print(res2)
    # print(res3)
    # print(res4)

    # res = longestCommonPrefix(["aa", "ab"])
    # print(res)
    # for i in range(0, 3):
    #     print(i)
    #     if i == 1:
    #         break
    # else:
    #     print("hello, world!")

    """因为在for循环中执行了break,所以else语句下面的语句不会执行"""
    # s1 = "aa"
    # s2 = "ab"
    # str_length = [len(s1), len(s2)]
    # max_length = max(str_length)
    #

    # res1 = common_start('aa', 'aab')
    # print(res1)
    # print(list(zip('aa', 'aab')))

    strs1 = ['abc', 'bcd', 'defg']
    strs2 = ('abc', 'bcd')
    strs3 = {'a': 1, 'b': 2}
    print(*strs1[0])
    for z1 in zip(*strs1):
        print(z1)
    """
    ('a', 'b', 'd')
    ('b', 'c', 'e')
    ('c', 'd', 'f')
    """
    print('@@@')
    #
    # for z2 in zip(strs2):
    #     print(z2)
    #
    # print('###')
    #
    # for z3 in zip(strs3):
    #     print(z3)
    #
    # print('$$$')

