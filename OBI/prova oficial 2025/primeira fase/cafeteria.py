a, b, c, d = (int(input()) for i in range(4))

t = 0
while t + a + d <= c:
    t += d
    
r = c - t

if r in range(a, b + 1):
    print("S")
else:
    print("N")