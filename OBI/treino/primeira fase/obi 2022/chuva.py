def main():
    n, s = (int(input()) for i in range(2))
    
    d = list(map(int, input().split()))
    
    l, r, c, z = 0, 0, 0, 0
    t = 0
    while r <= n:
    
        if c > s:
            c -= d[l]
            l += 1
        else:
            if c == s:
                if r != l:
                    t += 1 
                a = l
                while r != l + 1 and a < r - 1 and d[a] == 0:
                    t += 1
                    a += 1
            if r < n:
                c += d[r] 
            r += 1        
    
    print(t)
if __name__ == "__main__":
    main()

