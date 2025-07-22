class Solution:
    def processStr(self, s: str, k: int) -> str:
        l = 0
        for c in s:
            if c == "%":
                ...
            elif c == "#":
                l *= 2
            elif c == "*":
                if (l > 0):
                    l -= 1
            else:
                l += 1
        if k >= l:
            return "."
        for c in s[::-1]:
            if c == "%":
                k = l - k - 1
            elif c == "#":
                l //= 2
                if l != 0:
                    k %= l
            elif c == "*":
                l += 1
            else:
                l -= 1
                if k == l:
                    return c

        return "."