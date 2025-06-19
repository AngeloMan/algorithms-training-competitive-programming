n = int(input())

arr = [int(n) for n in input().split()]

m = max(arr)

mt = [["0" for i in range(n)] for i in range(m)]

for i, v in enumerate(arr):
    c = m
    while (v > 0):
        v -= 1
        c -= 1
        mt[c][i] = "1"
        
for i in mt:
    print(" ".join(i))