#falho 30/100
def f(x):
  return abs(x - 1) if x < 2 else 2


n = int(input())
dp = {tuple([2 for i in range(n)]) : 1}
def solve(a):
  k = tuple(a)
  z = 0
  if k == (2, 2, 2, 2, 2):
    return 1
  for i in range(n):
    if a[i] == 1:
      na = [int(v) for v in a]
      na[i] = 2
      if (i + 1 < n):
        na[i + 1] = f(na[i + 1])
      if (i > 0):
        na[i - 1] = f(na[i - 1])
      print(a, na)
      if na == [2, 2, 2, 2, 2]:
        print("+ 1")
      z += solve(na)
  return z

a = [0 if c == "B" else 1 for c in input().split()]
print(solve(a))
print(dp)