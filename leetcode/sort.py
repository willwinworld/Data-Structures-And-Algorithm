#! python3
# -*- coding: utf-8 -*-


def bubble_sort(array):
    n = len(array)
    for i in range(n):
        for j in range(1, n-i):
            if array[j-1] < array[j]:
                array[j-1], array[j] = array[j], array[j-1]
    return array


if __name__ == '__main__':
    arr = [8.5, 8.0, 9.5, 9.0]
    res = bubble_sort(arr)
    print(res)