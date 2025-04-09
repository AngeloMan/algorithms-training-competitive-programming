n = 13;y= 0;x = 0;small = [];list_= []
for i in range(0 , 14 + n):
    
    if x > n - 1:
        if y < n - 2:
            a = ' '
            print(a * (n - y - 2), i, sep='')
            y += 1
            small = [' ' for i in range(n - y - 1)]
            small.append(i)
            list_.append(small)
            small = []
        else:
            y = 0 
            x = 0
    if x <= n - 1:
        small.append(i)
        print(i, end='')
        x += 1
        if x > n - 1:
            print()
            list_.append(small)
            small = []
 
print('\n',list_)   
for i in range(n):
    for j in list_:
        try:
            if j[i] != ' ':
                print("PAYPALISHIRING"[j[i]], end='')
        except Exception:
            ...
        