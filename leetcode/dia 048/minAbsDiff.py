class Solution:
    def minAbsDiff(self, grid: List[List[int]], k: int) -> List[List[int]]:
        import heapq

        result = []
        for i in range(len(grid) - k + 1):
            row = []
            for j in range(len(grid[0]) - k + 1):
                a = set()
                for m in range(i, i + k):
                    for n in range(j, j + k):
                        a.add(grid[m][n])
                if len(a) == 1:
                    row.append(0)
                else:
                    a = sorted(list(a))
                    mi = float("inf")
                    for h in range(1, len(a)):
                        if a[h] - a[h - 1] < mi:
                            mi = a[h] - a[h - 1]
                    row.append(mi)
            result.append(row)
        return result
                        