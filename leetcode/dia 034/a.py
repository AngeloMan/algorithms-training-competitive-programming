class Solution:
    def maxFreqSum(self, s: str) -> int:
        from string import ascii_lowercase
        a = dict(zip(list('aeiou'), [0 for i in range(5)]))
        b = dict(zip([n for n in ascii_lowercase if n not in a], [0 for i in range(22)]))
        for l in s:
            if l in a:
                a[l] += 1
            else:
                b[l] += 1
        return max(a.values()) + max(b.values())
