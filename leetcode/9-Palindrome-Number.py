#! python3
# -*- coding: utf-8 -*-
"""负数不是回文数字
   0是回文数字"""


def isPalindrome(x):
    if x < 0:
        return False
    elif x == 0:
        return True
    else:
        tmp = x
        y = 0
        while x != 0:
            y = y * 10 + x % 10
            x = x // 10
        if y == tmp:
            return True
        else:
            return False


if __name__ == '__main__':
    res = isPalindrome(0)
    print(res)