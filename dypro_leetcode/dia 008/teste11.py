def coinChange(coins: list[int], amount: int) -> int:
    dp = {}
    coins = sorted(coins)
    def checker(current, t):
        if (current, t) in dp:
            return dp[(current, t)]
        if t == amount:
            return 0
        dp[(current, t)] = float('inf')
        for i in range(0, len(coins)):
            if t + coins[i] <= amount - coins[i] or t + coins[i] == amount and current <= coins[i]:
                dp[(current, t)] = min(dp[(current, t)], checker(coins[i], t + coins[i]) + 1) 
        return dp[(current, t)]
    a = checker(0, 0)
    return a if a != float("inf") else -1
     
print(coinChange([277,279,238,98,365,103,330,222,155], 7954))
list_ = ['a', 'b']

for i, j in enumerate(list_):
    print(i, j)
    
print(list_.index('b'))