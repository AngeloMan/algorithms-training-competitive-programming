from math import log2

print(int(log2(16)))

list_ = [1, 2, 3]
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSymmetric(self, root: List) -> bool:
        from math import log2
        print(root)
        ly = int(log2(len(root) + 1))
        c = 0
        for i in range(ly):
            lyln = 2**i
            if root[c:c + lyln] != root[c:c + lyln][::-1]:
                return False
            c = c + lyln
            
        return True
