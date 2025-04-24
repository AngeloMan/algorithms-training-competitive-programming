class Solution:
    def canJump(self, nums: List[int]) -> bool:
        dp = {}
        def rec(index):
            if index + nums[index] >= len(nums) - 1:
                return True 
            if index in dp:
                return dp[index]
            dp[index] = False
            for i in range(index + 1, index + 1 + nums[index]):
                if rec(i):
                    return True
            return dp[index]
        return rec(0)