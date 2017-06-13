#! python3
# -*- coding: utf-8 -*-
"""超出int32整型范围时要归零
int8    Byte (-128 to 127)
int16   Integer (-32768 to 32767)
int32	Integer (-2147483648 to 2147483647)
int64	Integer (-9223372036854775808 to 9223372036854775807)
uint8	Unsigned integer (0 to 255)
uint16	Unsigned integer (0 to 65535)
uint32	Unsigned integer (0 to 4294967295)
uint64	Unsigned integer (0 to 18446744073709551615)"""


def reverse(x):
    if x >= 0:
        char_str = str(x)[::-1]
        res = int(char_str)
        if res > 2147483647:
            return 0
        else:
            return res
    else:
        opposite_number = -x
        char_str = str(opposite_number)[::-1]
        res = -int(char_str)
        if res < -2147483648:
            return 0
        else:
            return res


if __name__ == '__main__':
    result = reverse(0)
    print(result)
    print(type(result))