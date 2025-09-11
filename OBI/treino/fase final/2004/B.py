from math import ceil

q = 1

def solve():
  global q
  n = int(input())
  if n == 0:
    return True
  print(f"Teste {q}")
  q+= 1
  arr = [[int(a) for a in input().split()] for i in range(n)]
  r = 1e9
  for i in range(n):
    m = 0
    for j in range(n):
      m = max(m, ((arr[i][0] - arr[j][0])**2 + (arr[i][1] - arr[j][1])**2))
    r = min(r, m)
    
  print(ceil((r)**0.5 * 2) + 5, end = "\n\n")    
  
while True:
  if solve():
    break