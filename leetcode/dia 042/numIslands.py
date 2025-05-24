class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        def search(s, i, j):
                if (i, j) in s or grid[i][j] == "0":
                    return False
                s.add((i, j))
                for m in range(i - 1, i + 2):
                    for n in range(j - 1, j + 2):
                        if m - i != n - j and m in range(0, len(grid)) and n in range(0, len(grid[0])) and (m == i or n == j):
                            search(s, m, n)
                return True
        s = set()
        total = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] != "0" and search(s, i, j):
                    total += 1
        return total
        