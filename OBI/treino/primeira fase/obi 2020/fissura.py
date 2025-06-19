from collections import deque

n, l = map(int, input().split())
m = []

for i in range(n):
    m.append(input())

q = deque()
s = set()

if int(m[0][0]) <= l:
    q.append((0, 0))
    s.add((0, 0))

while q:
    c = q.popleft()
    i, j = c[0], c[1]
    
    if i > 0 and int(m[i - 1][j]) <= l and not (i - 1, j) in s:
        q.append((i - 1, j))
        s.add((i - 1, j))
  
    if j > 0 and int(m[i][j - 1]) <= l and not (i, j - 1) in s:
        q.append((i, j - 1))
        s.add((i, j - 1))
        
    if i + 1< n and int(m[i + 1][j]) <= l and not (i + 1, j) in s:
        q.append((i + 1, j))
        s.add((i + 1, j))
  
    if j +1 < n and int(m[i][j + 1]) <= l and not (i, j + 1) in s:
        q.append((i, j + 1))
        s.add((i, j + 1))
        
for i in range(n):
    l = ""
    for j in range(n):
        if (i, j) in s:
            l += "*"
        else:
            l += m[i][j]
    print(l)