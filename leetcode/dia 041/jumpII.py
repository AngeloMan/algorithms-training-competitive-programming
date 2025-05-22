class Solution:
    def jump(self, nums: List[int]) -> int:
        dp = {}
        def rec(i):
            if i == len(nums) - 1:
                return 0
            if i in dp:
                return dp[i]
            dp[i] = float("inf")
            if i + nums[i] < len(nums):
                for j in range(nums[i]):
                    dp[i] = min(dp[i], 1 + rec(i + j + 1))
            else:
                for j in range(len(nums) - i - 1):
                    dp[i] = min(dp[i], 1 + rec(i + j + 1))
            return dp[i]
        return rec(0)