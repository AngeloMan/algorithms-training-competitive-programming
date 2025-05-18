class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        l, r = 0, len(nums) - 1
        if r > 0:
            if nums[l] > nums[l + 1]:
                return l
            if nums[r] > nums[r - 1]:
                return r
        while True:
            m = int((l + r)/2)
            if m - 1 > 0 and nums[m] < nums[m - 1]:
                r = m
            elif m + 1 < len(nums) and nums[m] < nums[m + 1]:
                l = m
            else:
                return m
