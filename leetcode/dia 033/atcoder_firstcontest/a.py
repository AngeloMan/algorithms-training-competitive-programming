# a ac
def check(r, x):
    d = {1: 1600 <= r and r <= 2999, 2: 1200 <= r and  r <= 2399}
    if d[x]:
        return 'Yes'
    return 'No'
  
  
a, b = map(int, input().split())
print(check(a, b))

