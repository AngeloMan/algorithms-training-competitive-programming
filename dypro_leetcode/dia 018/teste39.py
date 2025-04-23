from math import sqrt

n = 3102

from time import time
lim_sqr = int(sqrt(n))
coins = [n**2 for n in range(1, lim_sqr + 1)]
ch = {}
t1 = time()

def recursive(i = 0, t = 0, rec = 0):
    rec += 1
    if rec > 6:
        return float('inf')
    if time() - t1 > 1:
        raise Exception
    if (i, t) in ch:
        return ch[(i, t)]
    if t == n:
        return 0
    
    ch[(i, t)] = float('inf')
    for j in range(i, len(coins)):
        if t + coins[j] <= n - coins[j] or t + coins[j] == n:
            ch[(i, t)] = min(recursive(j, t + coins[j]) + 1, ch[(i, t)])
    return ch[(i, t)]
    
print(recursive()) 
