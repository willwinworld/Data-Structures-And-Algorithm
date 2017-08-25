#! python3
# -*- coding: utf-8 -*-


class Solution(object):
    def mySqrt(self, x):
        """
        :type x:int
        :rtype: int
        二分法，牛顿迭代法
        """
        low, mid, high = 0, x/2, x
        while low <= high:
            if mid * mid < x:
                # 如果小了，增加下界
                low = mid + 1
            else:
                # 如果大了，减少上界
                high = mid - 1
            mid = (low + high) / 2
        return mid


if __name__ == '__main__':
    s = Solution()
    print(s.mySqrt(4))
