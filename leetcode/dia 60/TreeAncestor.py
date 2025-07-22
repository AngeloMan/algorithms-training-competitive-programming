class TreeAncestor:

    def __init__(self, n: int, parent: List[int]):
        self.m = (1 << (n.bit_length() - 1))
        self.grid = [parent]
        for i in range(1, self.m):
            a = False
            nw = [-1 for i in range(n)]
            for j in range(n):
                if self.grid[i - 1][j] != -1 and self.grid[i - 1][self.grid[i - 1][j]] != -1:
                    if not a:
                        a = True
                    nw[j] = self.grid[i - 1][self.grid[i - 1][j]]     
            if not a:
                break
                self.m = i - 1
            self.grid.append(nw)

    def getKthAncestor(self, node: int, k: int) -> int:
        if k == 0 or node == -1:
            return node
        a = min(k.bit_length(), len(self.grid)) - 1
        b = 1 << a
        return self.getKthAncestor(self.grid[a][node], k - b)
        