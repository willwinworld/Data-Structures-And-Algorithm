#! python3
# -*- coding: utf-8 -*-


class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def levelOrderBottom(self, root):
        """
        :param root: TreeNode
        :return: List[List[int]]
        """
        if root is None:
            return []
        else:
            result = []
            if root.left is not None or root.right is not None:
                son_left = self.levelOrderBottom(root.left)
                son_right = self.levelOrderBottom(root.right)
                result.append([son_left.val, son_right.val])