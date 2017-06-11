#! python3
# -*- coding: utf-8 -*-


def twoSum(nums, target):
    length = len(nums)
    for i in range(0, length-1):
        for j in range(i+1, length):
            if i != j:
                if nums[i] + nums[j] == target:
                    return [i, j]
"""空间复杂度太高，考虑采用二分法"""
"""
   1.首先去寻找比target小的数，这样就排除了一些数
   2.如果是偶数，首先除以2，得到mid值，然后寻找小于等于mid的值i，然后j肯定在mid到target-1里面
   3.如果是奇数，减1，转换成偶数，同样得到mid值，左边一列还是小于等于mid的，而右边一列的数是target-i+1
   4.考虑target为0的情况,同时寻找比target小的数时，要将原始的index放在map中
   
   7      6     9     8
  1  6   1  5  1  8  1  7
  2  5   2  4  2  7  2  6
  3  4   3  3  3  6  3  5
               4  5  4  4
"""
def twoSum_improvement(nums, target):
    if target <= 0:
        length = len(nums)
        for i in range(0, length - 1):
            for j in range(i + 1, length):
                if nums[i] + nums[j] == target:
                    return [i, j]
    else:
        new_nums = {}
        for index, element in enumerate(nums):
            if element <= target:
                new_nums.setdefault(index, element)
        if target % 2 == 0:
            mid = target / 2
            i_index = None
            j = None
            for index, element in new_nums.items():
                if element <= mid:
                    i_index = index
                    j = target - element
            for index,element in new_nums.items():
                if j == element:
                    if index < i_index:
                        return [index, i_index]
                    else:
                        return [i_index, index]
        else:
            new_target = target - 1
            mid = new_target / 2
            i_index = None
            j = None
            for index, element in new_nums.items():
                if element <= mid:
                    i_index = index
                    j = new_target - element
            for index, element in new_nums.items():
                if j+1 == element:
                    if index < i_index:
                        return [index, i_index]
                    else:
                        return [i_index, index]
"""这种算法不行，太多种情况没有考虑，而且很麻烦"""
"""简单解决方式，用hashmap"""
def find_index_by_value(diff, hashmap):
    for index, value in hashmap.items():
        if diff == value:
            return index

def two_sum(nums, target):
    hashmap = {}
    for hash_index, element in enumerate(nums):
        hashmap[hash_index] = element
    for index, element in enumerate(nums):
        diff = target - element
        if diff in hashmap.values():
            return_index = find_index_by_value(diff, hashmap)
            if index != return_index:
                if index < return_index:
                    return [index, return_index]
                else:
                    return [return_index, index]

"""leetcode并不能用两个函数组合"""
def twosum(nums, target):
    hashmap = {}
    for index, element in enumerate(nums):
        diff = target - element
        if diff in hashmap:
            return [hashmap[diff], index]
        hashmap[element] = index


if __name__ == '__main__':
    res = twosum([3, 2, 4], 6)
    print(res)
