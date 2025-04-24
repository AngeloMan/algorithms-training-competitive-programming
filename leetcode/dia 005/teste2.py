n = 3;y= 0;x = 0;small = [];list_= [];str_= "PAYPALISHIRING"
for i in range(0 , len(str_) + n):
    
    if x > n - 1:
        if y < n - 2:
            a = ' '
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
        x += 1
        if x > n - 1:
            list_.append(small)
            small = []
final_str = ''
for i in range(n):
    for j in list_:
        try:
            if j[i] != ' ':
                final_str += str_[j[i]]
        except Exception:
            ...

print(final_str)     
print(len(final_str))