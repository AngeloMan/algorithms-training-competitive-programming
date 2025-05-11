# b ac
def check(n, m, arr):
  c = []
  for i in range(len(arr)):
      if not(arr[i] in c and arr[i] <= m):
          c.append(arr[i])
      if (len(c) == m):
          return n - i
      
  return 0
      
n, m = [int(n) for n in input().split()]
arr = [int(n) for n in input().split()]

print(check(n, m, arr))