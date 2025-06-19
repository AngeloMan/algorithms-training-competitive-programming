n, s = map(int, input().split())

t = map(int, input().split())
last = 0
for i in t:
    if i - last > s + 0.5:
        print("No")
        break
    last = i
else:
    print("Yes")