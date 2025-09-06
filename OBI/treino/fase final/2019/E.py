ch = {}


n, k, c = map(int, input().split())

arr = [int(x) for x in input().split()]

def rec(i, k, c, t):
  try:
    if i >= n and t == k:
      return 0
    if (i, t) in ch:
      return ch[(i, t)]
    ch[(i, t)] = 0
    if (n - i - 1) >= c * (k - t):
      ch[(i, t)] = rec(i + 1, k, c, t) + arr[i]
    if (i + c < n and t < k):
      ch[(i, t)] = max(ch[(i, t)], rec(i + c, k, c, t + 1))
    return ch[(i, t)]
  except Exception:
    return -1e9
  
print(rec(0, k, c, 0))
