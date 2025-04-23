from time import time
from math import factorial
import sys

sys.setrecursionlimit(100000000)

#Math
def maze(m,n):
    result = int(factorial(m + n - 2)/(factorial(m- 1) * factorial(n - 1)))
    return result

#Dynamic Programming
def maze_2(m, n):
    dp = {}
    def checker(l, c):
        if (l, c) in dp:
            return dp[(l, c)]
        if l == 1 and c == 1:
            return 1
        if l > 1 and c > 1:
            dp[(l, c)] = (checker(l - 1, c) + checker(l, c - 1))
        if l > 1 and c == 1:
            dp[(l, c)] = (checker(l - 1, c))
        if l == 1 and c > 1:
            dp[(l, c)] = (checker(l, c - 1))
        return dp[(l, c)]
    return checker(m, n)

m, n = [18, 6]

t1 = time()
print('Math:\n',maze(m, n), '\ntime:', time() - t1)
t2 = time()
print('\nDyPro:\n',maze_2(m, n), '\ntime:', time() - t2)

print()
m, n = [75, 19]

t1 = time()
print('Math:\n',maze(m, n), '\ntime:', time() - t1)
t2 = time()
print('\nDyPro:\n',maze_2(m, n), '\ntime:', time() - t2)
