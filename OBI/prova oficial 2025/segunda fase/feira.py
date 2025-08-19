n, t = map(int, input().split())

tp = [int(i) for i in input().split()]
pc = [int(i) for i in input().split()]

dc = {}

for i in range(n):
    if not tp[i] in dc:
        dc[tp[i]] = []
    dc[tp[i]].append(pc[i])

ind = sorted([[pc[i], tp[i]] for i in range(n)])

cl = int(input())
t = 0
k = 0

for a in dc:
    dc[a].sort(reverse = True)
#print(ind)
#print(dc)

for i in map(int, input().split()):
    if (i == 0):
        while (k < n and (len(dc[ind[k][1]]) == 0 or dc[ind[k][1]][-1] != ind[k][0])):
            k+=1
        if (k < n):
            t += ind[k][0]
            dc[ind[k][1]].pop()
            k += 1
    else:
        if (i in dc and len(dc[i]) > 0):
            t += dc[i][-1]
            dc[i].pop()

print(t)
