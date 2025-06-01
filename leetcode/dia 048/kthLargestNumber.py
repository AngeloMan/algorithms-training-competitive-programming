class Solution:
    def kthLargestNumber(self, nums: List[str], k: int) -> str:
        import heapq
        nums = [-int(n) for n in nums]
        heapq.heapify(nums)
        for i in range(k):
            a = heapq.heappop(nums)
        return str(-a)