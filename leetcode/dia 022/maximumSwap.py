class Solution:
    def maximumSwap(self, num: int) -> int:
        a = list(str(num))
        if len(a) == 1:
            return num
        def fix(a):
            if len(a) == 1:
                return a
            first = int(a[0])
            h = 0
            for i in range(1, len(a)):
                if int(a[i]) >= int(a[h]):
                    h = i  
            if a[h] != a[0]:
                a[0] = a[h]
                a[h] = str(first)
                return ''.join(a)
            else:
                result = a[0] + ''.join(fix(a[1:len(a)]))
                return result
        return int(fix(a))
                