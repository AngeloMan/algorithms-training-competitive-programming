class Solution:
    def rangeAddQueries(self, n: int, queries: List[List[int]]) -> List[List[int]]:
        matrix = [[0 for j in range(n)] for i in range(n)]
        for q in queries:
            for i in range(q[0], q[2] + 1):
                matrix[i][q[1]] += 1
                if q[3] < n - 1:
                    matrix[i][q[3] + 1] -= 1

        for i in range(n):
            for j in range(1, n):
                matrix[i][j] += matrix[i][j - 1]
        return matrix