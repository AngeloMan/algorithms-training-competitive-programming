from array import array

n, q = map(int, input().split())
nums = array("i", [i + 1 for i in range(n)])
p = 0

for o in range(q):
    inp = list(map(int, input().split()))
    if inp[0] == 1:
        nums[(inp[1] - 1 + p)%n] = inp[2]
    elif inp[0] == 2:
        print(nums[(inp[1] - 1 + p)%n])
    else:
        p += inp[1]