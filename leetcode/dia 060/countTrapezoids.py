class Solution:
    from math import comb
    def countTrapezoids(self, p: List[List[int]]) -> int:
        mod = (10 ** 9) + 7
        n = len(p)
        d = {}
        
        for i in range(n):
            if not p[i][1] in d:
                d[p[i][1]] = 0
            d[p[i][1]] += 1
        r = 0
        t = 0
        for a in d:
            if d[a] > 1:
                d[a] = comb(d[a], 2)
                t += d[a]
            else:
                d[a] = 0

        for a in d:
            t -= d[a]
            r += d[a] * t
            r %= mod
        return r