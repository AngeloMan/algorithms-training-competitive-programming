l = int(input())
m = int(1e9 + 7)
w = input()
n = len(w)
dp = [-1 for i in range(n)]
dp.append(1)

def rec(i):
	if dp[i] != -1:
		return dp[i]
	a = int(w[i])
	dp[i] = 0
	if (a == 0 or a > l):
		return 0
	r = i
	while (a < l and r < n):
		dp[i] += rec(r + 1)
		dp[i] %= m
		a *= 10
		r+= 1
		if (r < n):
			a += int(w[r])
	return dp[i]
	
	
print(rec(0))
