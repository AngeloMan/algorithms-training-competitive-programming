from copy import deepcopy

def get_routes(routes, f, t, r_p, n, current='', total = [], x = 0, current_value = [0, 0], total_values = []):
    if x == 0:
        current += str(f)
    x += 1
    if int(x) < int(n):
        a = current
        b = deepcopy(current_value)
        for z in range(len(r_p)):
            i = r_p[z]
            current_value = deepcopy(b)
            current = a
            if (not str(i[0]) in current or not str(i[1]) in current) and f in i:
                other = i[0]
                if f == i [0]:
                    other = i[1]
                if other == t:
                    current_value[0] += routes[z][2]
                    current_value[1] += routes[z][3]
                    current += str(t)
                    total.append(current)
                    total_values.append(deepcopy(current_value))
                else:
                    current_value[0] += routes[z][2]
                    current_value[1] += routes[z][3]
                    current += str(other)
                    total, total_values = get_routes(routes, other, t, r_p, n, current, total, x, deepcopy(current_value), total_values)
        return total, total_values
        
              
    

if __name__ == "__main__":
    value, n, r = [int(x) for x in input().split()]
    routes = []
    for i in range(r):
        routes.append([int(x) for x in input().split()])
    f, t = [int(x) for x in input().split()]
    
    r_p = []
    for i in routes:
        r_p.append([i[0], i[1]])
    
    trc, tv = get_routes(routes, f, t, r_p, n)
    print(trc,'\n', tv)
    
    