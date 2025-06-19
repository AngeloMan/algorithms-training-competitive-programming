def main():
    n = int(input())
    
    m = []
    
    for i in range(n):
        m.append(list(map(int, input().split())))
        
    h, l = 0, float("inf")
        
    for i in range(n):
        s = 0
        for j in range(n):
              if m[i][j] == 0:
                  c = (i + 1, j + 1)
              s += m[i][j]
        h, l = max(h, s), min(l, s)
        
    print(h - l)
    for i in c:
        print(i)
if __name__ == "__main__":
    main()
