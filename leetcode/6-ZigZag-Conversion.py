#! python3
# -*- coding: utf-8 -*-


def convert(s, numRows):
    """
    输入string s,顺序为按zigzag模式
    根据行数，返回顺序模式
    P   A   H   N
    A P L S I I G
    Y   I   R
    string convert(string text, int nRows);
    zigzag -->  顺序模式
    convert("PAYP ALIS HIRI NG", 3) --> "PAHNAPLSIIGYIR"
    1.头尾满足序列号为row+1的间隔, 0  4  8  12  (row+1=4)
    2.中间数目为row - 2 = 3 -2 = 1
    3.中间数字的波动范围
    4. 所以先建立首尾数字，然后去填充中间数字

    0         8         16
    1     7   9     15  17
    2    6   10   14    18
    3  5     11  13     19
    4        12         20

    第一行和最后一行的下标间隔interval = 5 * 2 - 2 = 8
    中间行的间隔是周期性的，interval-2*i = 8 - 2*1 = 6, 2*i = 2*1=2  (i是行数再减1)
    """
    step = (numRows == 1) - 1  # 0 or -1  True: 1, False: 0  当numRows等于1时，step为0
    rows, idx = [''] * numRows, 0  # rows: ['','','']  idx: 0
    # print(rows)
    # print(idx)
    for c in s:
        rows[idx] += c
        if idx == 0 or idx == numRows - 1:  # idx == 0或者2时
            step = -step  # numRows为3时，step为-1, numRows为0时，step为0
            print(step)
        idx += step
        # print(idx)  # idx 0 1 2变化
    return ''.join(rows)


if __name__ == '__main__':
    res = convert('PAYPALISHIRING', 3)

