def lengthOfLIS(nums):
    if len(nums) == 0:
        return 0
    dp = {}
    def checker(index):
        if index in dp:
            return dp[index]
        if index == len(nums) - 1:
            return 1
        dp[index] = 0
        for i in range(index + 1, len(nums)):
            if nums[i] > nums[index]:
                a = checker(i)
                if a >= dp[index]:
                    dp[index] = a + 1
        if not dp[index]:
            dp[index] = 1
        if index < len(nums) - 1:
            return dp[index]
    
    k = 1

    for j in range(len(nums)):
        z = checker(j)
        if z > k:
            k = z
    return k

print(lengthOfLIS([10,9,5,3,7,101,18,1,2]))