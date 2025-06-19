a = input()
num = [int(n) for n in list(a)]
total = 0

while len(num) > 1:
    if num[-1] > 0:
        total += num[-1]
        num = [n - num[-1] if n - num[-1] >= 0 else n - num[-1] + 10 for n in num]
    else:
        num.pop()
        total += 1
    
print(total + num[0] + 1)