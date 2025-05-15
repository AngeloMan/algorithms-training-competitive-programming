class Solution:
    def uniquePathsWithObstacles(self, matrix: List[List[int]]) -> int:
        dp = {}
        def rec(i, j):
            if i == len(matrix) - 1 and j == len(matrix[0]) - 1:
                return 1 if matrix[i][j] == 0 else 0
            if (i, j) in dp:
                return dp[(i, j)]
            dp[(i, j)] = 0
            if i + 1 < len(matrix):
                if matrix[i + 1][j] != 1:
                    dp[(i, j)] += rec(i + 1, j)
            if j + 1 < len(matrix[0]):
                if matrix[i][j + 1 ] != 1:
                    dp[(i, j)] += rec(i, j + 1)
            return dp[(i, j)]
        return 0 if matrix[0][0] == 1 else rec(0, 0)
