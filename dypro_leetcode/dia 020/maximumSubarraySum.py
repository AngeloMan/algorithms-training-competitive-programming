from collections import deque
def maximumSubarraySum(nums, k):
    l = 0 
    r = k - 1
    crr = nums[l:r + 1]
    if len(set(crr)) == k:
        ma = sum(crr)
    else:
        ma = 0
    stop = False
    while r < len(nums) - k + 1:
        print(crr) 
        crr.remove(nums[l])
        l += 1
        r += 1
        crr.add(nums[r])
        while len(set(crr)) != k:
            crr.remove(nums[l])
            l += 1
            r += 1
            if r >= len(nums):
                stop = True
                break   
            crr.add(nums[r])     
        if stop:
            break
        ma = max(ma, sum(crr))
    return ma
                
print(maximumSubarraySum([9,9,9,1,2,3], 3))