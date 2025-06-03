n, m = map(int, input().split())

walls = [0 for i in range(n)]

for i in range(m):
    l, r = map(int, input().split())
    walls[l - 1] += 1
    if r < n:
        walls[r] -= 1
   

result = float("inf")
for i in range(1, n):
    walls[i] = walls[i] + walls[i - 1]
    if walls[i] < result:
        result = walls[i]
    
print(min(result, walls[0]))