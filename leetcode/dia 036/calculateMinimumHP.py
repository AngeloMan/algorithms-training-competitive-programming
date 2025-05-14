class Solution:
    def calculateMinimumHP(self, dungeon: List[List[int]]) -> int:
        dp = {}
        def rec(i, j):
            if (i == len(dungeon) - 1 and j == len(dungeon[0]) - 1):
                if dungeon[i][j] >= 0:
                    return 0
                return 1 - dungeon[i][j] 
            if (i, j) in dp:
                return dp[(i, j)]
            dp[(i, j)] = float('inf')
            if i + 1 < len(dungeon):
                a = rec(i + 1, j)
                if a <= 0 and dungeon[i][j] <= 0:
                    dp[(i, j)] = 1 - dungeon[i][j]
                else:    
                    dp[(i, j)] = a - dungeon[i][j]
            if j + 1 < len(dungeon[0]):
                a = rec(i, j + 1)
                if a <= 0 and dungeon[i][j] <= 0:
                    dp[(i, j)] = min(dp[(i, j)], 1 - dungeon[i][j])
                else:     
                    dp[(i, j)] = min(dp[(i,j)], a - dungeon[i][j])
            return dp[(i, j)]
        a = rec(0, 0)
        if a <= 0:
            return 1
        return a 
        
