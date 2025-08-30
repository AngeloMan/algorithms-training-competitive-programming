from collections import deque

erd = "P. Erdos"
tq = 0
while (True):
  tq += 1
  n = int(input())
  if (n == 0):
    break
  nms = {}
  ind = 0
  gf = {}
  for i in range(n):
    at = input().split(",")
    
    for j, a in enumerate(at):
      if a[-1] == ".":
          a = a[0:-1]
      if a[0] == " ":
        a = a[1:len(a)]
      
      if not a in nms:
        nms[a] = ind
        gf[ind] = []
        ind += 1
      at[j] = nms[a]
    
    for u in range(len(at)):
      for v in range(u + 1, len(at)):
        a = at[u]
        b = at[v]
        gf[at[u]].append(at[v])
        gf[at[v]].append(at[u])
  
  e = -1
  if erd in nms:
    e = nms[erd]
  dist = [-1 for i in range(len(nms))]
  check = [True for i in range(len(nms))]
  if (e != -1):
    
    check[e] = False
    dist[e] = 0
    q = deque([e])
    while (len(q)):
      c = q.popleft()
      for nb in gf[c]:
        if check[nb]:
          check[nb] = False
          q.append(nb)
          dist[nb] = dist[c] + 1
    
   
  kys = sorted([b.split('.')[::-1] for b in list(nms.keys())])
  final = ""
  for k in kys:
    a = ".".join(k[::-1])
    r = dist[nms[a]]
    if r == -1:
      r = "infinito"
    if a != erd:
      final += a + ": " + str(r) + "\n"
  print("Teste", tq)
  print(final)
  print()