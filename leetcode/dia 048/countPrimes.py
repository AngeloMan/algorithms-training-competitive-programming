class Solution:
    def countPrimes(self, n: int) -> int:
        if n <= 2:
            return 0
        from math import sqrt
        sieve = [True if i % 2 == 1 else False for i in range(n)]
        sieve[2] == True
        for i in range(3, int(sqrt(n)) + 1, 2):
            if sieve[i]:
                if i * i <= n:
                    up = 3 * i
                    while up < n:
                        sieve[up] = False
                        up += 2 * i
        total = 1
        for i in range(2, n):

            if sieve[i]:

                total += 1
        return total
