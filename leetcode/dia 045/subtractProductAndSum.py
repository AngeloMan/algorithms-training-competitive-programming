class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        def sum_prod(n):
            ts, tp = 0, 1
            while n != 0:
                last = n % 10
                ts += last 
                tp *= last
                n = n//10
            return ts, tp
        ts, tp = sum_prod(n)
        return tp - ts