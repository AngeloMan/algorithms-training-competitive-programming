def gridt(m , n):
    dp = {}
    def calculator(i = 0, j = 0):
        if (i, j) in dp:
            return dp[(i, j)]
        if i == m - 1 or j == n - 1:
            return 1 
        dp[(i, j)] = calculator(i + 1, j) + calculator(i, j + 1)
        return dp[(i, j)]
 
    return calculator()
            
print(gridt(4, 4)) 
             