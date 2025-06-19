sv, se = set(), set()
def vsum(a, b, x):
    if (a, b) in sv:
        return 
    if a + b >= x:
        sv.add((a, b))
    if a + 1 < 7:
        vsum(a + 1, b, x)
    if b + 1 < 7:
        vsum(a, b + 1, x)
        
def sub(a, b, x):
    if (a, b) in se:
        return 
    if a - b >= x or b - a >= x:
        se.add((a, b))
    if a + 1 < 7:
        sub(a + 1, b, x)
    if b + 1 < 7:
        sub(a, b + 1, x)

a, b = map(int, input().split())

vsum(1, 1, a)
sub(1, 1, b)

final = set((*sv, *se))
print(len(final)/36)