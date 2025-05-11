# c ac
def sumProd(arr, n):
    total = 0
    totalsum = 0
    for i in arr:
        total += i * totalsum
        totalsum += i
    return total
        
  
n, arr = int(input()), [int(n) for n in input().split()]
print(sumProd(arr, n))