class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        matrix = [[None for x in range(n)] for x in range(n)]
        i, j, d, line, c = 0, 0, 1, True, 0
        while c != n**2:
            c += 1
            matrix[i][j] = c
            if line:             
                if not j + d in range(n) or matrix[i][j + d]:
                    line = False
                    i += d
                else:
                    j += d
            else:
                if not i + d in range(n) or matrix[i + d][j]:
                    if d == 1:
                        d = -1
                    else:
                        d = 1
                    line = True
                    j += d
                else:
                    i += d
        return matrix
