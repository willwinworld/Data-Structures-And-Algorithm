#! python3
# -*- coding: utf-8 -*-
"""罗马数字共有7个，
即Ⅰ（1）、Ⅴ（5）、Ⅹ（10）、Ⅼ（50）、Ⅽ（100）、Ⅾ（500）和Ⅿ（1000）
1.按照下述的规则可以表示任意正整数。需要注意的是罗马数字中没有“0”，与进位制无关。一般认为罗马数字只用来记数，而不作演算

思路：只要去管左减这个规则，因为右加原则只要累加就行了
"""


def romanToInt(s):
    # res = 0
    numbers = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    raw_s = [i for i in s]
    if s == 'IIII':  # 先考虑最简单的情况, 因此有时用IIII代替IV
        res = 4
        """
        右加左减
        在较大的罗马数字的右边记上较小的罗马数字，表示大数字加小数字
        在较大的罗马数字的左边记上较小的罗马数字，表示大数字减小数字
        左减数字必须为一位，左减数字有限制，仅限于I，X, C
        右加数字不可连续超过三位，<=3
        """
    else:
        """先考虑左减"""
        left_subtract_sum_holder = []
        for index, element in enumerate(raw_s):
            if element == 'I' or element == 'X' or element == 'C':
                if index+1 <= len(raw_s) - 1:
                    next_element = numbers[raw_s[index+1]]
                    correspond_value = numbers[element]
                    if next_element > correspond_value:
                        left_subtract_sum = next_element - correspond_value
                        left_subtract_sum_holder.append({'left': index, 'right': index+1,'sum': left_subtract_sum})
        if len(left_subtract_sum_holder) != 0:
            subtract_index = []
            subtract_sum = 0
            for d in left_subtract_sum_holder:
                subtract_index.append(d['left'])
                subtract_index.append(d['right'])
                subtract_sum += d['sum']
            raw_s_index = list(range(len(raw_s)))
            rest_index = [item for item in raw_s_index if item not in subtract_index]
            rest_sum = sum([numbers[raw_s[x]] for x in rest_index])
            print(subtract_sum)
            res = subtract_sum + rest_sum
        else:
            res = sum([numbers[x] for x in raw_s])
    return res


if __name__ == '__main__':
    # s = 'MDCCCLXXXIV'
    # s = 'MCMXCVI'
    result = romanToInt(s)
    print(result)


