# a = [213, 3323, 21, 32, 12, 143, 212, 324, 121, 1, 3242, 4324, 323, 323]
# i = a.index(min(a))
# print(a[0:i])
# print(a[i + 1: len(a)])
class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        if min(heights) == max(heights):
            return heights[0] * len(heights)
        
        def calc(l, r, h, dp = {}):
            if (l, r) in dp:
                return dp[(l, r)]
            if l == r:
                return heights[r - 1]
            area = (r - l) * min(heights[l:r])
            dp[(l, r)] = max(area, calc(l + 1, r, h), calc(l, r - 1, h))
            return dp[(l, r)]
        def optmize(h):
            try:
                if min(h) == max(h):
                    return h[0] * len(h)
            except Exception:
                ...
            if len(h) > 20:
                i = h.index(min(h))
                return max(len(h) * min(h), optmize(h[0:i]), optmize(h[i + 1: len(h)]))
            else:
                return calc(0, len(h), h)
        if sorted(heights) == heights and len(heights) > 30:
            a = len(heights) - 1
            max_ = 0
            while a > 0:
                while heights[a - 1] == heights[a]:
                    a -= 1
                max_ = max(heights[a] * (len(heights) - a), max_)
                a -= 1
            return max_
        else:        
            return optmize(heights)
    