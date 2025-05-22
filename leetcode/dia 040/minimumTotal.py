class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        dp = {}
        def rec(i, ly):
            if i > len(triangle[ly]):
                return float('inf')
            if (i, ly) in dp:
                return dp[(i, ly)]
            if ly == len(triangle) - 1:
                return triangle[ly][i]
            dp[(i, ly)] = triangle[ly][i] + min(rec(i, ly + 1), rec(i + 1, ly + 1))
            return dp[(i, ly)]
        return rec(0, 0)
