class Solution:
    def processStr(self, s: str) -> str:
        r = []
        for c in s:
            if c == "#":
                r += r
            elif c == "%":
                r = r[::- 1]
            elif c == "*":
                if r:
                    r.pop()
            else:
                r.append(c)
        return "".join(r)