from math import sqrt
for w in range(int(input())):
    l, a, b = map(int, input().split())
    sa = ((a - 1)*(a))/2
    s  = sa + l
    n = int((sqrt(1 + 8 * s) + 1)/2)
    k = int(((n - 1) * n)/2 - sa)
    if (k < l):
        n+= 1
    print(min(b - a + 1, n - a))