class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        from collections import deque
        result = []
        dq = deque()
        for i in range(k):
            if len(dq) != 0:   
                while len(dq) > 0 and nums[dq[-1]] <= nums[i]:
                    dq.pop()
            dq.append(i)
        result.append(nums[dq[0]])
        for i in range(k, len(nums)):
            while len(dq) > 0 and nums[dq[-1]] <= nums[i]:
                dq.pop()
            dq.append(i)
            if dq[0] == i - k:
                dq.popleft()
            result.append(nums[dq[0]])
                    
        return result