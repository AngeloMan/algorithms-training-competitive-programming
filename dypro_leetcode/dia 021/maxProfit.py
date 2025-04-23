class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if prices == sorted(prices, reverse = True):
            return 0
        dp = {}
        def rec(new, l):
            if new:
                if l >= len(prices) - 1:
                    return 0
                if ('t',l) in dp:
                    return dp[('t',l)]
                dp[('t',l)] = 0 
                for i in range(l, len(prices) - 1):
                    dp[('t',l)] = max(dp[('t',l)], rec(False, i))
                return dp[('t',l)]
            else:
                if l in dp:
                    return dp[l]
                dp[l] = 0
                for i in range(l + 1, len(prices)):
                    if prices[i] > prices[l]:
                        dp[l] = max(dp[l], prices[i] - prices[l] + rec(True, i + 1))  
                return dp[l]
        return rec(True, 0)