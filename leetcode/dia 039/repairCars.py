class Solution:
    def repairCars(self, ranks: List[int], cars: int) -> int:
        from math import ceil, sqrt
        h = max(ranks)
        w = min(ranks)
        l = w * ceil(cars/len(ranks))**2
        r = h * ceil(cars/len(ranks))**2
        result = None
        while r >= l:
            m = (r + l)//2
            total = sum(int(sqrt(m/i)) for i in ranks)
            if total >= cars:
                result = m
                r = m - 1
            else:
                l = m + 1
        return result