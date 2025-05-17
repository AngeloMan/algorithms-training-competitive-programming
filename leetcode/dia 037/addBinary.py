class Solution:
    from collections import deque
    def addBinary(self, a: str, b: str) -> str:
        result = deque()
        current, i = 0, 0
        while i < max(len(a), len(b)) or current > 0:
            if i < len(a):
                current += int(a[- i - 1]) 
            if i < len(b):
                current += int(b[- i - 1]) 
            if current % 2 == 1:
                current -= 1
                result.appendleft("1")
                if current >= 2:
                    current = int(current/2)
            else:
                result.appendleft("0")
                current = int(current/2)
            i += 1
        return "".join(result)