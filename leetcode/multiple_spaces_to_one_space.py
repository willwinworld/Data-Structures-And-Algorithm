#! python3
# -*- coding: utf-8 -*-


origin = "A BC  DE   F"  # 将多个空格变成一个空格
length = len(origin)
res = []
for i in range(0, length):
    if not origin[i].isalpha() and not origin[i+1].isalpha():
        continue
    else:
        res.append(origin[i])
test = ''.join(res)
print(test)

"""
另外一种思路：通过比对没有空格的字符串来确定空格的所属长度
A_BC__DE___F
ABCDEF
"""
