class Solution:
    def sumOfLargestPrimes(self, s: str) -> int:
        from math import sqrt

        def generate(n):
            dp = {}
            result = [2]
            current = 3
            while result[-1] < sqrt(n):
                if not current in dp:
                    result.append(current)
                    new = 3 * current 
                    while new in dp:
                        new += 2 * current
                    dp[new] = current
                else:
                    new = (dp[current] * 2) + current
                    while new in dp:
                        new += 2 * dp[current]
                    dp[new] = dp[current]
                current += 2
            return result

        se = set()
        for i in range(len(s)):

            for j in range(i + 1, len(s) + 1):
                c = True
                a = int(s[i:j])
                if a != 1:
                    for p in generate(a):
                        if a % p == 0:
                            c = False
                            break
                    if c or a in (2, 3, 5, 7):
                        se.add(a)

        final = sorted(list(se), reverse=True)
        total = 0

        for i in range(min(3, len(final))):
            total += final[i]

        return total