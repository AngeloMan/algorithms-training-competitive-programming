class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def rec(node):
            if node == None:
                return [True, 1]
            a = rec(node.left)
            if a[0] == False:
                return [False]
            b = rec(node.right)
            if not b[0]:
                return [False]
            return [abs(a[1] - b[1]) <= 1, 1 + max(a[1], b[1])]

        return rec(root)[0]