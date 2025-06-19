import math
a, b = map(int, input().split())

if (math.ceil(a/b) - a/b < -math.floor(a/b)  + a/b):
    print(math.ceil(a/b))
else:
    print(math.floor(a/b))