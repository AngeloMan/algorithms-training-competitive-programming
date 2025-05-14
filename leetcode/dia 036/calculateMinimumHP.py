class Solution:
    def calculateMinimumHP(self, dungeon: List[List[int]]) -> int:
        dp = {}
        def rec(i, j):
            if (i == len(dungeon) - 1 and j == len(dungeon[0]) - 1):
                if dungeon[i][j] >= 0:
                    return 1
                return 1 - dungeon[i][j] 
            if (i, j) in dp:
                return dp[(i, j)]
            dp[(i, j)] = float('inf')
            if i + 1 < len(dungeon):  
                dp[(i, j)] = max(1, rec(i + 1, j) - dungeon[i][j])
            if j + 1 < len(dungeon[0]):
                print(rec(i, j + 1))
                dp[(i, j)] = min(dp[(i,j)], max(1, rec(i, j + 1) - dungeon[i][j]))
            return dp[(i, j)]
        a = rec(0, 0)
        if a <= 0:
            return 1
        return a 
