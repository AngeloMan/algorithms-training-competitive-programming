def main():
    def dsum(n):
        r = 0
        while n != 0:
            r += n % 10
            n //= 10
        return r
        
    n, m, s = (int(input()) for i in range(3))
    
    r = -1
    for i in range(n, m + 1):
        if dsum(i) == s:
            r = i
    
    print(r)

if __name__ == "__main__":
    main()
