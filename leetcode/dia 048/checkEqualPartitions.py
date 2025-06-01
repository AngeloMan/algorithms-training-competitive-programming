class Solution:
    def checkEqualPartitions(self, nums: List[int], target: int) -> bool:
        def rec(i, t1, t2):
            if i == len(nums) and t1 == target and t2 == target:
                return True
            if i < len(nums):
                return rec(i + 1, t1 * nums[i], t2) or rec(i + 1, t1, t2 * nums[i]) 
            return False
        return rec(0, 1, 1)