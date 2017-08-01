#! python3
# -*- coding: utf-8 -*-
"""Merge two sorted linked lists and return it as a new list.
 The new list should be made by splicing together the nodes of the first two lists.
"""
"""
Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None
"""


class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


"""
输入: l1 = 1->2->4 l2 = 3 输出: 1->2->3->4
"""


class Solution(object):
    def mergeTwoLists(self,l1,l2):
        temp = ListNode(-1)  # 当前节点指针
        head = temp  # 赋值给头节点
        while l1 and l2:
            if l1.val < l2.val:
                temp.next = l1
                l1 = l1.next  # l1的next指针指向下一个l1节点？
            else:
                temp.next = l2
                l2 = l2.next
            temp = temp.next
        if l1:
            temp.next = l1
        else:
            temp.next = l2
        return head.next
"""l1 = l1.next是指本来指向l1链表的第一个节点，让l1指针指向了下一个节点"""

