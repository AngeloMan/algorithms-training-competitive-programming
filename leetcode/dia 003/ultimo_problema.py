from copy import deepcopy

def recive_data(ran = 1):
    value = []
    for i in range(ran):
        value.append([int(x) for x in str(input()).split()])
    return value

def check(f, t, conections, n, x = 0, route='', routes_ = []):
    if x < n - 1:
        for i in conections:
            if f in i:
                route += str(f)
                if t in i:
                    route += str(t)
                    routes_.append(route)
                    route = ''
                else:
                    for k in i:
                        if k != f:
                            x+=1
                            check(k, t, n, x, route)
                    
        return routes_
    else:
        return None
    

if __name__ == "__main__":
    n, b = recive_data()[0]
    barcos = recive_data(b)
    conections = deepcopy(barcos)
    
    for i in conections:
        i.pop(2)
    
    # b1-b2 np
    n_cases = int(input())
    cases = recive_data(n_cases)
    
    a = []
    
    for i in cases:
        a.append(check(i[0], i[1]))
        
    print(a)
