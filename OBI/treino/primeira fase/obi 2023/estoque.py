def main():
    m, n = map(int, input().split())
    
    r = []
    
    for i in range(m):
        r.append([int(x) for x in input().split()])
        
    t = 0
        
    for a in range(int(input())):
        i, j = map(int, input().split())
        if r[i - 1][j - 1] > 0:
            t += 1
            r[i - 1][j - 1] -= 1
          
    print(t)

if __name__ == "__main__":
    main()
