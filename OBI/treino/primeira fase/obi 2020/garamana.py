def check(a, b):
    q = 0
    d = {}
    for c in a:
        if not c in d:
            d[c] = 0
        d[c] += 1
    for c in b:
        if c == "*":
            q += 1
        else:
            if not c in d or d[c] == 0: 
                return "N"
            d[c] -= 1
    t = sum(d.values())

    if q < t:
        return "N"
    return "S"
    
    
a, b = (input() for i in range(2))

print(check(a, b))