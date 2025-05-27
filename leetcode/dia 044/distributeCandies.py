class Solution:
    def distributeCandies(self, n: int, limit: int) -> int:
        dp = {}
        def rec(total, i):
            if (total, i) in dp:
                return dp[(total, i)]
            if total == n:
                return 1
            if i == 3:
                return 0
            dp[(total, i)] = 0
            for j in range(limit + 1):
                if total + j <= n:
                    dp[(total, i)] += rec(total + j, i + 1)
            return dp[(total, i)]
        return rec(0, 0)