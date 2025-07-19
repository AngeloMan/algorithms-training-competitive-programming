n, m = map(int, input().split())

ms = []

for i in range(m):
  a, b = map(int,input().split())
  ms.append([a, b])
  
ms.sort(key = lambda x: x[0] - x[1])

i = 0
t = 0
while n > 0 and i < m:
		if (n >= ms[i][0]):
			k = (n - ms[i][0])//(ms[i][0] - ms[i][1]);
			t += k + 1;
			n -= (ms[i][0] - ms[i][1]) * (k + 1);
		i+= 1
		
print(t)