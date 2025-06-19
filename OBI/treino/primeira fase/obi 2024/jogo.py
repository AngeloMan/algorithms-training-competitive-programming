def main():
    n, q = map(int, input().split())
    
    m = []
    
    for i in range(n):
        m.append(input())
        
    def jogo(m):
        nm = []
        for i in range(n):
            l = ""
            for j in range(n):
                v = 0
                for a in range(i - 1, i + 2):
                    for b in range(j - 1, j + 2):
                        if a in range(0, n) and b in range(0, n) and (a != i or b != j):
                            v += int(m[a][b])
                if (m[i][j] == "0" and v == 3) or (m[i][j] == "1" and v in range(2, 4)):
                    l += "1"
                else:
                    l += "0"
            nm.append(l)
        return nm
        
    for i in range(q):
        m = jogo(m)
        
    for l in m:
        print(l)
if __name__ == "__main__":
    main()