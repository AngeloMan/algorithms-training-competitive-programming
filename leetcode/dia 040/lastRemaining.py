class Solution:
    def lastRemaining(self, n: int) -> int:
        def rec(n):
            if n <= 5:
                return n if n < 3 else 2                
            if n % 2 == 1:
                return rec(n - 1)
            return n - (rec(int(n/2)) - 1) * 2
        return rec(n)
