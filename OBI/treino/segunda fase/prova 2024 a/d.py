import heapq

def solve(i, j, mt, m, n):
    t = mt[i][j]
    vis = [[True for i in range(n)] for i in range(m)]
    wk = [[True for i in range(n)] for i in range(m)]
    vis[i][j] = False
    wk[i][j] = False
    pq = []
    
    if (i > 0):
        heapq.heappush(pq, (mt[i - 1][j], i - 1, j))   
        vis[i - 1][j] = False
    if (i + 1 < m):
        heapq.heappush(pq, (mt[i + 1][j], i + 1, j))   
        vis[i + 1][j] = False
    if (j > 0):
        heapq.heappush(pq, (mt[i][j - 1], i, j - 1))   
        vis[i][j - 1] = False
    if (j < n + 1):
        heapq.heappush(pq, (mt[i][j + 1], i, j + 1))   
        vis[i][j + 1] = False
    while (len(pq)):
        v, a, b = heapq.heappop(pq)
        if (wk[a][b]):
            t += v
            wk[a][b] = False
            if (a > 0):
                heapq.heappush(pq, (mt[a - 1][b], a - 1, b))   
                vis[a - 1][b] = False
            if (a + 1 < m):
                heapq.heappush(pq, (mt[a + 1][b], a + 1, b))   
                vis[a + 1][b] = False
            if (b > 0):
                heapq.heappush(pq, (mt[a][b - 1], a, b - 1))   
                vis[a][b - 1] = False
            if (b < n + 1):
                heapq.heappush(pq, (mt[a][b + 1], a, b + 1))   
                vis[a][b + 1] = False
    return t          
    
def main():
    m, n = map(int, input.split())
    mt = []
    for i in range(m):
        mt.append([int(x) for x in input().split()])
    for i in range(m):
        r = ""
        for j in range(n):
            r += str(solve(i, j, mt, m, n)) + " "
    print(r)
    
main()