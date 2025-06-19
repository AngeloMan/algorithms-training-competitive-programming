def main():
    n, m = map(int, input().split())

    c = tuple(map(int, input().split()))
    l = c[0]
    di = {c[i]: i for i in range(n)}

    e = tuple(map(int, input().split()))
    t = 0
    for i in e:
        t += abs(di[l] - di[i]) 
        l = i

    print(t)

main()