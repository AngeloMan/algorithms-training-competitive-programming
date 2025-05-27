class Solution:
    def distributeCandies(self, n: int, limit: int) -> int:
        from math import comb, ceil, floor
        total = comb(n + 2, 2)
        p1, p2, p3 = 0, 0, 0
        if n - limit - 1 >= 0:
            p1 = comb(n - limit + 1, 2)
        if n - (2 * limit + 2) >= 0:
            p2 = comb(n - (2 * limit + 2) + 2, 2)
        if n - (3 * limit + 3) >= 0:
            p3 = comb(n - (3 * limit + 3) + 2, 2)
        result = total * (1 - 3 * (p1/total) + 3 * (p2/total) - (p3/total))
        if result > floor(result) + 0.5:
            return ceil(result)
        return floor(result)