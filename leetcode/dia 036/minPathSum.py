class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        dp = {}
        def rec(i, j):
            if i == len(grid) - 1 and j == len(grid[0]) - 1:
                return grid[i][j]
            if (i, j) in dp:
                return dp[(i, j)]
            a = float('inf')
            if i + 1 < len(grid):
                a = min(a, rec(i + 1, j))
            if j + 1 < len(grid[0]):
                a = min(a, rec(i, j + 1))
            dp[(i, j)] = a + grid[i][j]
            return dp[(i, j)]
        return rec(0, 0)

