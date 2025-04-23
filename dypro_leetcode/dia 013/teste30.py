class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l = 0 
        r = len(heights) - 1
        ma = 0
        while l < r:
            ma = max(ma, (r - l) * min(heights[r], heights[l]))
            if heights[r] < heights[l]:
                r -= 1
            elif heights[r] > heights[l]:
                l += 1
            else:
                if heights[r - 1] > heights[l + 1]:
                    r -= 1
                elif heights[r - 1] < heights[l + 1]:
                    l += 1
                else:
                    l += 1 
                    r -= 1
        return ma