#! python3
# -*- coding: utf-8 -*-
"""
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements
from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.
"""
# def extendList(val, list=[]):
#    list.append(val)
#    return list
# list1 = extendList(10)
# list2 = extendList(123,[])
# list3 = extendList('a')
# print("list1 = %s" % list1)
# print("list2 = %s" % list2)
# print("list3 = %s" % list3)


# def qsort(seq):
#     if not seq:
#         return []
#     else:
#         pivot = seq[0]
#         lesser = qsort([x for x in seq[1:] if x < pivot])
#         larger = qsort([x for x in seq[1:] if x > pivot])
#         return lesser + [pivot] + larger


# if __name__ == '__main__':
#     seq = [5, 6, 78, 9, 0, -1, 2 ,3 ,-65, 12]
#     print(qsort(seq))

# class Singleton(object):
#     """单例模式,所谓单例就是一个类从始至终只能产生一个实例"""
#     def __new__(cls, *args, **kwargs):
#         if not hasattr(cls, '_instance'):
#             cls._instance =  object.__new__(cls, *args, **kwargs)
#         return cls._instance


# temp = [lambda x: i*x for i in range(4)]
# print(temp)
#
#
# def bubble_sort(nums):
#     for i in range(len(nums)-1):
#         for j in range(len(nums)-i-1):
#             if nums[j] > nums[j+1]:
#                 nums[j], nums[j+1] = nums[j+1], nums[j]
#     return nums
#
#
# class Student(object):
#     @property
#     def score(self):
#         return self._score
#
#     @property.setter
#     def score(self, value):
#         if isinstance(value, int):
#             raise ValueError('score must be an integer')
#         if value < 0 or value > 100:
#             raise ValueError('score must between 0~100!')
#         self._score = value
#
# import requests
# from functools import wraps
#
#
# def cache(func):
#     saved = {}
#
#     @wraps(func)
#     def wrapper(url):
#         if url in saved:
#             return saved[url]
#         else:
#             content = func(url)
#             saved[url] = content
#     return wrapper

# import re
# temp_str = 'hello java, hello python,use javascript'
# rex = r'(hello|use)'
# print(re.sub(rex, 'bye', temp_str))
#
# class SingTon(object):
#     def __new__(cls, *args, **kwargs):
#         if not hasattr(cls, *args, **kwargs):
#             cls._instance = object.__new__(cls, *args, **kwargs)
#         return cls._instance


# from functools import reduce
#
#
# print(reduce(lambda x, y: x+y, range(10), 2))  # 2为初始值
# print(2+0+1+2+3+4+5+6+7+8+9)
"""
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to
hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.
"""


class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        双指针: 1.先进行判断nums1与nums2的列表中是否存在元素，如果是空列表，直接进行合并
               2.如果两个列表都有元素，双指针进行同时遍历，找到结合点
        """
        while n > 0:
            if m <= 0 or nums2[n-1] > nums1[m-1]:
                nums1[m+n-1] = nums2[n-1]
                n -= 1
            else:
                nums1[m+n-1] = nums1[m-1]
                m -= 1




    def bubble_sort(self, seq):
        for i in range(len(seq) - 1):  # 这个循环负责设置冒泡排序进行的次数
            for j in range(len(seq) - i - 1):  # j为列表下标
                if seq[j] > seq[j+1]:
                    seq[j], seq[j+1] = seq[j+1], seq[i]
        return seq

if __name__ == '__main__':
    s = Solution()
    s.merge([1, 2 ,4], 3, [3, 6, 8], 3)


    # test1 = [1, 2, 4]
    # test2 = [3, 6, 8]
    # test1.insert(2, test2[0])
    # print(test1)
    # print(test2)
