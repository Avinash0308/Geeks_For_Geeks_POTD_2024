class Node:
    def _init_(self, val):
        self.right = None
        self.data = val
        self.left = None
# your task is to complete this function


class Solution:
    # Function to convert a binary tree into its mirror tree.
    def mirror(self, root):
        # Code here
        if root == None:
            return root
        root.left = self.mirror(root.left)
        root.right = self.mirror(root.right)
        temp = root.left
        root.left = root.right
        root.right = temp
        return root
