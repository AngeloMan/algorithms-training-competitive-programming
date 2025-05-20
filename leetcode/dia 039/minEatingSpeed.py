class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        from math import ceil, floor
        maxv = max(piles)
        l = 1 
        r = maxv
        result = None
        while l <= r:
            k = floor((l + r)/2)
            sumk = sum(ceil(p/k) for p in piles)
            if sumk <= h:
                result = k
                r = k - 1
            else:
                l = k + 1

        return result 