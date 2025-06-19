def main():
    n, e = map(int, input().split())
    
    g = {i + 1: set() for i in range(n)}
    
    for i in range(e):
        a, b = map(int, input().split())
        g[a].add(b)
        g[b].add(a)
    
    t = 0
        
    for i in range(int(input())):
        l, *c = map(int, input().split())
        for i in range(l - 1):
            if not c[i + 1] in g[c[i]]:
              break
            
        else:
              t += 1
              
    print(t)        

if __name__ == "__main__":
    main()
