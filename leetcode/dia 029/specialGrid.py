class Solution:
    def specialGrid(self, n: int) -> List[List[int]]:
        def rec(n):
            matrix = []
            if n == 0:
                return [[0]]
            last = rec(n - 1)
            for i in last:
                a = 2**((n-1)*2)
                matrix.append([*[x + (2**(2*n)) - a for x in i],*i])
            for i in range(len(last)):
                matrix.append([*[x + (2**(2*n)) - 2*a for x in last[i]],*[x + a for x in last[i]]])

            return matrix
        return rec(n)