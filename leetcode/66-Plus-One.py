#! python3
# -*- coding: utf-8 -*-


class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        flag = 1
        for i in reversed(range(len(digits))):
            if digits[i] + flag == 10:
                digits[i] = 0
                flag = 1
                print(flag)
            else:
                digits[i] = digits[i] + flag
                flag = 0
                print(flag)
        # print(flag)
        if flag == 1:
            # 观察最后一位是否是9
            digits.insert(0, 1)
        print(digits)
        return digits


if __name__ == '__main__':
    solution = Solution()
    solution.plusOne([8, 9])
    # test = solution.plusOne([9, 9])
    # print(test)
    """
    [0] -> [1]
    [9] -> [1, 0]
    [9, 9] -> [1, 0, 0]
    """
