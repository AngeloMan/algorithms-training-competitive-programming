class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        cache = {}
        def placer(i = 0, f = 0, b = 0):
            if (i, f, b) in cache:
                return cache[(i, f, b)]
            if i == (n * 2) - 1:
                return [')']
            cache[(i, f, b)] = []
            if f < n:
                for s in placer(i + 1, f + 1, b):
                        cache[(i, f, b)].append('(' + s)
            if f > b:
                for s in placer(i + 1, f, b + 1):
                    cache[(i, f, b)].append(')' + s)
            return cache[(i, f, b)]
        return placer()