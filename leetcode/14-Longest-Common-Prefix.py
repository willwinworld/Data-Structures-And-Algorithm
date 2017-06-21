#! python3
# -*- coding: utf-8 -*-
"""
一个列表中有许多个字符串，写一个function找出这些字符串中最长的共同字首
['abcd', 'abccc', 'abdec'] --> 共同字首为'ab'
"""


def longestCommonPrefix(strs):
    length = len(strs)
    # first_second_mutual = None
    if length == 2:
        mutual_list = [s for s in strs[0] if s in strs[1]]
        if len(mutual_list) == 0:
            first_second_mutual = ""
            print('aaa')
        else:
            first_second_mutual = ''.join([s for s in strs[0] if s in strs[1]])
        return first_second_mutual
    else:
        first_second_mutual = ''.join([s for s in strs[0] if s in strs[1]])
        print(first_second_mutual)
        first_second_mutual_length = len(first_second_mutual)
        print(first_second_mutual_length)
        end = 1
        parts = []
        while end < first_second_mutual_length:
            part = first_second_mutual[0:end]
            parts.append(part)
            end += 1
        # parts.append(first_second_mutual)  # 得到列表前两项的公有部分所有字符组合['a', 'ab', 'abc']

        track = 0
        for i in range(2, length):
            if first_second_mutual in strs[i]:
                track = i
            else:
                break
        if track == length - 1:
            """最好情况，列表中所有元素的公有前缀就是前两个元素的公有前缀"""
            return first_second_mutual
        else:
            public = ""
            parts_length = len(parts)
            for i in range(2, length):
                for idx, p in enumerate(parts):
                    if idx + 1 < parts_length:
                        if p in strs[i] and parts[idx + 1] not in strs[i]:
                            public = p
                            break
            else:
                public = ""
            return public


if __name__ == '__main__':
    res = longestCommonPrefix(['abcd', 'abccc', 'abdec'])
    print(res)
    # res = longestCommonPrefix(['abcd', 'abccc', 'abdec'])
    # if res == "":
    #     print("empty")
    # else:
    #     print("not empty")
    # test = 'abc'
    # print(test[2:])
    # l = ['a', 'b', 'c']

    # for idx, ele in enumerate(l):
    #     print(l[idx], l[idx+1])