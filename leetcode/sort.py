#! python3
# -*- coding: utf-8 -*-
import re

# def bubble_sort(array):
#     n = len(array)
#     for i in range(n):
#         for j in range(1, n-i):
#             if array[j-1] < array[j]:
#                 array[j-1], array[j] = array[j], array[j-1]
#     return array
#
#
# if __name__ == '__main__':
#     arr = [8.5, 8.0, 9.5, 9.0]
#     res = bubble_sort(arr)
#     print(res)


test1 = 'Bolivia (Plurinational State of)'
test2 = 'Switzerland17'

# res = re.findall(r'\(.*\)', test1)
# print(res)
test1 = re.sub(r'\(.*\)', "", test1)
print(test1)
test2 = re.sub(r'\d+', "", test2)
print(test2)
