def main():
    m, n = map(int, input().split())

    s1 = [{} for i in range(m)]
    s2 = [{} for i in range(n)]
    b1 = []
    allvar = set()

    for i in range(m):
      j = 0
      for e in input().split():
        j += 1
        if j <= n:
            if not e in allvar:
                allvar.add(e)
            if (not e in s1[i]):
              s1[i][e] = 0
            s1[i][e] += 1
            if (not e in s2[j - 1]):
              s2[j - 1][e] = 0
            s2[j- 1][e] += 1
        else:
            b1.append(int(e))
      
    b2 = [int(v) for v in input().split()]

    var = {}

    for i in range(m):
        if len(s1[i]) == 1:
            a = list(s1[i].keys())[0]
            var[a] = b1[i]/ n
  
    for i in range(n):
        if len(s2[i]) == 1:
            a = list(s2[i].keys())[0]
            var[a] = b2[i]/m
        
    while len(allvar) > len(var):
      for i in range(m):
        for v in var:
          if v in s1[i]:
            b1[i] -= s1[i][v] * var[v]
            s1[i].pop(v)
        if len(s1[i]) == 1:
            a = list(s1[i].keys())[0]
            var[a] = b1[i]/ s1[i][a]
  
      for i in range(n):
          for v in var:
              if v in s2[i]:
                b2[i] -= s2[i][v] * var[v]
                s2[i].pop(v)
          if len(s2[i]) == 1:
              a = list(s2[i].keys())[0]
              var[a] = b2[i]/s2[i][a]
      
    kys = sorted(list(var.keys()))
  
    for k in kys:
      print(k, int(var[k]))

main()