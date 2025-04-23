class Solution:
    def rob(self, nums: list[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        dp = {}
        def checker(list_ = nums, index = -1, total = 0, dp = {}):
            if (index, total) in dp:
                return dp[(index, total)]
            if index == len(list_) or index == len(list_) -1 or index == len(list_) - 2:
                return total
            if index == -1:
                range_ = range(0, 2)
            else:
                range_ = range(index + 2, len(list_))
            dp[(index, total)] = 0
            for i in range_:
                dp[(index, total)] = max(dp[(index, total)], checker(list_ ,i , total + list_[i], dp))
            return dp[(index, total)]


        def breaker(big):
            x = len(big)
            if x > 6:
                mid = int(len(big)/ 2)
                a = breaker(big[0:mid])
                b = breaker(big[mid + 1: len(big)])
                c = breaker(big[0:mid - 1])
                d = breaker(big[mid: len(big)])
                return max(a + b, c + d)
            else:
                dp = {}
                return checker(list_ = big, index = -1, total = 0, dp = {})
        return breaker(nums)