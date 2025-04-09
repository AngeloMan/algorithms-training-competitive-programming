import heapq

numbers = [5, 3, 12, 6, 4, 3, 7, 3, 7, 2, 45, 3]
a = [-n for n in numbers]
heapq.heapify(a)
print(a)
heapq.heappop(a)
print(a)
