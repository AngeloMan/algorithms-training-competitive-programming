from copy import deepcopy

def recive_data(ran = 1):
    value = []
    for i in range(ran):
        value.append([int(x) for x in str(input()).split()])
    return value

def check_trail(f, t, conections, n, x = 0, rt='', routes_ = []):
    if x < b:
        if x == 0:
            routes_ = []
            rt += str(f)
        a = rt
        for i in conections:
            rt = a
            if (not str(i[0]) in rt or not str(i[1]) in rt) and f in i:
                other = i[0]
                if f == i[0]:
                    other = i[1]
                if other == t:
                    rt += str(other)
                    routes_.append(rt)
                else:
                    x += 1
                    rt += str(other)
                    routes_ = check_trail(other, t, conections, n, x, rt, routes_)
        return routes_
    else:
        return routes_

if __name__ == "__main__":
    n, b = recive_data()[0]
    barcos = recive_data(b)
    conections = deepcopy(barcos)
    
    for i in conections:
        i.pop(2)
    
    # b1-b2 np
    n_cases = int(input())
    cases = recive_data(n_cases)
    result = []
    
    for i in cases:
        test = [list(i) for i in check_trail(i[0], i[1], conections, n)]
        k = []
        for i in test:
            k.append([int(x) for x in i])
        semi = []
        for j in k:
            x = 0
            shorter = 0
            for i in range(1, len(j)):
                for u in range(len(barcos)):
                    if j[i - 1] in conections[u] and j[i] in conections[u]:
                        if x == 0: 
                            shorter = barcos[u][2]
                            x += 1
                        else:
                            if barcos[u][2] < shorter:
                                shorter = barcos[u][2]
            semi.append(shorter)
        result.append(sorted(semi)[len(semi) - 1])
        
    for i in result:
        print(i)
