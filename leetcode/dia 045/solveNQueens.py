class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        from copy import deepcopy
        result = []
        matrix = ['.' * n for i in range(n)]
        def rec(i, c, dp, ds, matrix):
            for j in range(n):
                if not j in c and not (i- min(i, j) , j - min(i, j)) in dp and not (i - min(i, n - 1 - j), j + min(i, n - 1 - j)) in ds:
                    matrix[i] = "." * j + "Q" + "." * (n - 1 - j)
                    if i == n - 1:
                        result.append(deepcopy(matrix))
                    else:
                        c.add(j)
                        dp.add((i- min(i, j) , j - min(i, j)))
                        ds.add((i - min(i, n - 1 - j), j + min(i, n - 1 - j)))
                        rec(i + 1, c, dp, ds, matrix)
                        c.remove(j)
                        dp.remove((i- min(i, j) , j - min(i, j)))
                        ds.remove((i - min(i, n - 1 - j), j + min(i, n - 1 - j)))
        rec(0, set(), set(), set(), matrix)
        return result
