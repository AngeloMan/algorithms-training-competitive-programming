from array import array
n, q = map(int, input().split()) 

arr = array("i", [0 for i in range(n)])

for a in map(int, input().split()):
    if a > 0:
        print(a, end = " ")
        arr[a - 1] += 1
    else:
        m = 0
        for j in range(n):
            if arr[j] < arr[m]:
                m = j
        arr[m] += 1
        
        print(m + 1, end = " ")