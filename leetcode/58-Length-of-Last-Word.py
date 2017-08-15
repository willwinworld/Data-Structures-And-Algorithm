#! python3
# -*- coding: utf-8 -*-
"""
Given a string s consists of upper/lower-case alphabets and empty space characters ' ',
return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example,
Given s = "Hello World",
return 5.

"""
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 0:
            return 0
        else:
            res = 0
            words = s.split(' ')
            for word in words[::-1]:
                if len(word) != 0 and word.isalpha():
                    res = len(word)
                    break
            return res


if __name__ == '__main__':
    solution = Solution()
    res = solution.lengthOfLastWord('Today is a nice day')
