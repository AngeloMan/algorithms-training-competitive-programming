def maxArea(heights) -> int:
    ma = 0
    for i in range(len(heights) - 2):
        a = len(heights) - 1
        ma = max(ma, (a - i) * min(heights[i], heights[a]))
        try:
            while heights[a] < max(heights[i + 1: a]):
                a -= 1
                if heights[a] > heights[a + 1]:
                    ma = max(ma, (a - i) * min(heights[i], heights[a]))
        except Exception:
            ...
    return ma 

print(maxArea([1,2]))
# k = 0
# for i in range(1000000):
#     k += 1
#     k +=2
#     if k % 2 == 0:
#         k + 2
#     print(k)
# print('a')