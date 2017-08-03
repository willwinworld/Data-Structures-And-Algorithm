#! python3
# -*- coding: utf-8 -*-

"""Returns the index of the first occurrence of needle in haystack,
 or -1 if needle is not part of haystack"""
class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
                这道题让我们在一个字符串中找另一个字符串第一次出现的位置，
                那我们首先要做一些判断，如果子字符串为空，则返回0，
                如果子字符串长度大于母字符串长度，则返回-1。
                然后我们开始遍历母字符串，我们并不需要遍历整个母字符串，
                而是遍历到剩下的长度和子字符串相等的位置即可，这样可以提高运算效率。
                然后对于每一个字符，我们都遍历一遍子字符串，一个一个字符的对应比较，
                如果对应位置有不等的，则跳出循环，如果一直都没有跳出循环，则说明子字符串出现了，则返回起始位置即可
        """
        if needle == "":
            """如果子字符串为空，则返回0"""
            return 0
        elif len(needle) > len(haystack):
            """如果子字符串长度大于母字符串的长度，则返回-1"""
            return -1
        else:
            str_length = len(haystack)
            sub_str_length = len(needle)
            for i in range(str_length):
                upper = i + sub_str_length
                fragment = haystack[i:upper]
                print(fragment)
                if fragment == needle:
                    return i
                elif upper > str_length - 1:
                    """如果片段的上界已经母字符串的最大值"""
                    return -1

    def kmp(self):
        """寻找子串，kmp算法,最优的O(n)复杂度"""


if __name__ == '__main__':
    solution = Solution()
    test = solution.strStr("mississippi", "ppi")
    print(test)
