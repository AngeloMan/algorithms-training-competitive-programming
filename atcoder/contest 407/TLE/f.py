n = int(input())
nums = [int(n) for n in input().split()]
from collections import deque
for k in range(1, n + 1):
    result = 0
    dq = deque()
    for i in range(k):
        if len(dq) != 0:   
            while len(dq) > 0 and nums[dq[-1]] <= nums[i]:
                dq.pop()
        dq.append(i)
    result += nums[dq[0]]
    for i in range(k, len(nums)):
        while len(dq) > 0 and nums[dq[-1]] <= nums[i]:
            dq.pop()
        dq.append(i)
        if dq[0] == i - k:
            dq.popleft()
        result += nums[dq[0]]
                
    print(result)