class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        mx = 2
        if len(points) == 1:
            return 1
        for p1 in points:
            ch = {}
            for p2 in points:
                if p1 != p2:
                    try:
                        m = (p1[1] - p2[1])/(p1[0] - p2[0])
                        n = p1[1] - (m * p1[0])
                    except Exception:
                        m = float("inf")
                        n = p1[0]
                    if (m, n) in ch:
                        ch[(m, n)] += 1
                        mx = max(mx, ch[(m, n)])
                    else:
                        ch[(m, n)] = 2     
        return mx
