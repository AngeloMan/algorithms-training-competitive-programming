def main():
    n = int(input())

    arr = [a for a in input().split()]
    for i in range(n):
        j, tp = i + 1, i + 1
        f = "".join(arr[0:0 + i + 1])
        a = int(f)
        while True:
            a += 1
            if a >= 10**tp:
                tp+= 1
            if j + tp <= n:
                b = int("".join(arr[j:j+tp]))
                if b != a:
                    break
                j = j + tp
            else:
                break
        if j == n:
            return f


print(main())
