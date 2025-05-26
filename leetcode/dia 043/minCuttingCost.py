class Solution:
    def minCuttingCost(self, n: int, m: int, k: int) -> int:
        a, b = n - k, m - k
        total = 0
        if a > 0:
            total += a * k
        if b > 0:
            total += b * k
        
        return total