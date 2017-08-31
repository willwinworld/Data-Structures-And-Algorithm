#! python3
# -*- coding: utf-8 -*-
"""
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
"""
# Definition for singly-linked list.


class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None or head.next is None:
            return head
        p = head
        while p.next:
            if p.val == p.next.val:
                p.next = p.next.next
            else:
                p = p.next
        return head


if __name__ == '__main__':
    # head = ListNode(0)
    # first = ListNode(1)
    # second = ListNode(1)
    # third = ListNode(2)
    # head.next = first
    # first.next = second
    # second.next = third
