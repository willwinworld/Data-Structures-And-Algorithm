#! python3
# -*- coding: utf-8 -*-


# def isValid(s):
#     bracket = []
#     for i in s:
#         if not i.isalpha():
#             bracket.append(i)
#     correspond = {'(': ')', '[': ']', '{': '}'}
#     length = len(bracket)
#     print(bracket)
#     if length % 2 == 0:
#         if bracket[0] != ')' and bracket[0] != ']' and bracket[0] != '}':
#             for idx, b in enumerate(bracket):
#                 if idx % 2 == 0:
#                     if idx + 1 < length:
#                         if bracket[idx+1] == correspond[b]:
#                             pass
#                         else:
#                             return False
#             return True
#         else:
#             return False
#     else:
#         return False
# def situation1(input_list):
#     correspond = {'(': 1, ')': -1, '{': 2, '}': -2, '[': 3, ']': -3}
#     length = len(input_list)
#     half = length // 2
#     for idx in range(half):
#         if correspond[input_list[length-1-idx]] + correspond[input_list[idx]] == 0:
#             pass
#         else:
#             return False
#     return True
#
#
# def situation2(input_list):
#     correspond = {'(': 1, ')': -1, '{': 2, '}': -2, '[': 3, ']': -3}
#     length = len(input_list)
#     for idx, b in enumerate(input_list):
#         if idx % 2 == 0:
#             if idx + 1 < length:
#                 if correspond[b] + correspond[input_list[idx+1]] == 0:
#                     pass
#                 else:
#                     return False
#     return True
#
#
# def isValid(s):
#     bracket = []
#     for i in s:
#         if not i.isalpha():
#             bracket.append(i)
#     correspond = {'(': 1, ')': -1, '{': 2, '}': -2, '[': 3, ']': -3}
#     value = 0
#     for b in bracket:
#         value += correspond[b]
#     if value == 0:
#         if bracket[0] != (')' or '}' or ']'):
#             if situation1(bracket) or situation2(bracket):
#                 return True
#             else:
#                 return False
#         else:
#             return False
#     else:
#         return False

"""利用栈的性质"""
def isValid(s):
    stack = []
    dict = {"]": "[", "}": "{", ")": "("}
    for char in s:
        if char in dict.values():
            stack.append(char)
        elif char in dict.keys():
            if stack == [] or dict[char] != stack.pop():
                return False
        else:
            return False
    return stack == []


def isValid1(s):
    delta = len(s)  # 原来字符串的长度
    while delta != 0 and delta % 2 == 0:
        s = s.replace("()", "")
        s = s.replace("[]", "")
        s = s.replace("{}", "")
        # breaks while loop if string was not altered during current pass
        delta = len(s) if delta > len(s) else 0  # 如果原来字符串的长度大于改变过后字符串的长度，
    return len(s) == 0

if __name__ == '__main__':
    # res = isValid('({})')
    # print(res)
    res = isValid1('({})')
