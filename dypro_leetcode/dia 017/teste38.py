class Solution:
    def validSquare(self, p1: List[int], p2: List[int], p3: List[int], p4: List[int]) -> bool:
        def get(f, s):
            return (((f[0] - s[0])**2)+((f[1] - s[1])**2))**0.5
        def m(l, k):
            try:
                return (l[1] - k[1])/(l[0] - k[0])
            except Exception:
                return float('inf')

        p = sorted([p1, p2, p3, p4])
        for i in range(1, len(p)):
            if p[i] == p[i-1]:
                return False
        if p[0][0] == p[1][0]:
            c, a, d, b = p
        else:
            a, d = p[0], p[3]
            b, c = p[1], p[2]
            if p[2][1] > p[1][1]: 
                c, b = p[1], p[2]
        if (
        get(a, d) == get(b, c) and 
        get(a, b) == get(b, d) and get(a, b) == get(c, d) and get(a,b) == get(a, c) and 
        get(b, d) == get(c, d) and get(b, d) == get(a, c) and
        get(c, d) == get(a, c)
        ):
            return True
        else:
            return False
