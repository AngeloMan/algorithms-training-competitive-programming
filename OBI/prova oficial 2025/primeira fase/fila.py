n = int(input())

arr = [int(n) for n in input().split()]

t, l = 0, -1
for i in range(n):
    if arr[-1 - i] > l:
        l = arr[-1 - i]
    else:
        t += 1
        
print(t)