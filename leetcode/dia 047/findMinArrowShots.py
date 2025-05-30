class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x: x[1])
        last = -float("inf")
        total = 0
        for p in points:
            if p[0] > last:
                total += 1
                last = p[1]
        return total