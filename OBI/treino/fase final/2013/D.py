def solve():
  n, k = map(int, input().split())
  t, arr, ln =0, [], 1 << n
  for i in range(ln):
    arr.append(int(input()))
    if (i > 0 and arr[i] > arr[0]):
      t += 1
  
  if t and k > n or arr[0] == max(arr) and k < n:
    return 0
  if k == n + 1 and arr[0] == max(arr):
    f = 1
    for i in range(1, ln + 1):
      f*= i
    return f
  kl, s, r, sm = 0, 0, 1, ln - t - 1
  for i in range(1, ln + 1):
    if i > (1 << r):
      r+= 1
    if r == k:
      kl += 1
    if r < k:
      s+= 1
  final = ln * kl
  for i in range(s):
    final *= (sm - i)
  for i in range(ln - 1 - s - 1):
    final *= ln - 1 - s - 1 - i
  return final
  
  
  
print(solve())