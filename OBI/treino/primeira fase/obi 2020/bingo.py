n, k, u = map(int, input().split())

nums = {i + 1: [] for i in range(u)}
c = {i + 1:0 for i in range(n)}

for i in range(n):
    for v in map(int, input().split()):
        nums[v].append(i + 1)
    
r = []


for i in map(int, input().split()):
    for j in nums[i]:
        c[j] += 1
        if c[j] == k:
            r.append(j)
            
    if r:
        break
    
print(*r)
    
