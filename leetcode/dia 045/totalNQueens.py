class Solution:
    def totalNQueens(self, n: int):
        from copy import deepcopy
        def rec(i, c, dp, ds):
            total = 0
            for j in range(n):
                if not j in c and not (i- min(i, j) , j - min(i, j)) in dp and not (i - min(i, n - 1 - j), j + min(i, n - 1 - j)) in ds:
                    if i == n - 1:
                        total += 1
                    else:
                        c.add(j)
                        dp.add((i- min(i, j) , j - min(i, j)))
                        ds.add((i - min(i, n - 1 - j), j + min(i, n - 1 - j)))
                        total += rec(i + 1, c, dp, ds)
                        c.remove(j)
                        dp.remove((i- min(i, j) , j - min(i, j)))
                        ds.remove((i - min(i, n - 1 - j), j + min(i, n - 1 - j)))
            return total
        return rec(0, set(), set(), set())