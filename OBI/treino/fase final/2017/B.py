n, dt = map(float, input().split())
n = int(n)
d = []
c = []
for i in range(n):
    v = [float(x) for x in input().split()]
    d.append(v[0])
    c.append(v[1])
d.append(dt)
dp = [1e9 for i in range(n + 1)]
dp[0] = 0

for i in range(n + 1):
    for j in range(i):
        dp[i] = min(dp[i], ((d[i] - d[j])**2)/c[j] + dp[j])

print(f"{dp[n]:.3f}")