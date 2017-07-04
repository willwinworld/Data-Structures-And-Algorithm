#! python3
# -*- coding: utf-8 -*-
"""
问题是这样的: 1只母羊，在第2年和第4年生下小母羊,在第5年死去,问N年后有多少母羊?
一只狐狸每次晚上都会往相邻的洞跳，不能间隔的跳，猎人每天早上会去检查洞，问有没有一种方式可以最大几率的抓到狐狸2？
"""
a = [1]
def sheep(N):
    N = int(N)
    if N == 1:
        return a
    for n,k in enumerate(a):
        a[n] += 1
    for n,k in enumerate(a):
        if k == 2:
            a.append(1)
        if k == 4:
            a.append(1)
    return sheep(N-1)

while True:
    b = sheep(input('请输入年份:\n'))
    c = [i for i in b if i < 5]
    print('母羊总数: %d'%len(c))
    a = [1]


