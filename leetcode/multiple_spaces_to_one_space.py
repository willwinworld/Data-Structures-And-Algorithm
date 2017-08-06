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