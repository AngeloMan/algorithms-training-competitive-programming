# from collections import deque
# from time import time 

# list_ = [n for n in range(3000)]
# deque_ = deque(list_)

# t1 = time()
# for i in range(1000, 2000):
#     list_.pop(i)
# print(time() - t1)
# t2 = time()

# for i in range(1000, 2000):
#     deque_.pop(i)
# print(time() - t2)

# list_ = ['abc', 'dfg', 'klm']

word, list_ = "cbca", ["bc","ca", 'o', 'a']

print(word)
print(word.removeprefix('odsd'))
print(word)