import heapq

s = set()

n = int(input())
nums = map(int, input().split())

for i in nums:
    if not str(i) in s:
        s.add(str(i))
final = sorted(list(s), key = lambda x: int(x))
print(len(s))
print(" ".join(final))