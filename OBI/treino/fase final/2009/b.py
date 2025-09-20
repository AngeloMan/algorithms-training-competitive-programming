n, m = map(int ,input().split())

arr = [i for i in range(n + 1)]

for i in range(m):
    c, a, b = map(str, input().split())
    a, b = int(a), int(b)
    if (c == "I"):
        arr[a:b + 1] = arr[a:b + 1][::-1]
    else:
        print(sum(arr[a:b + 1]))