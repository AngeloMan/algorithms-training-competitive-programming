class Solution:
    def insert(self, inter: List[List[int]], newinter: List[int]) -> List[List[int]]:
        if not inter:
            return [newinter]
        l, r = 0, len(inter) - 1
        result = []
        while l + 1 < r:
            m = (l + r)//2
            if inter[m][0] < newinter[0]:
                l = m
            elif inter[m][0] > newinter[0]:
                r = m
            else:
                l, r = m, m
        a, b = l, r
        r = len(inter) - 1
        while l + 1 < r:
            m = (l + r)//2
            if inter[m][1] < newinter[1]:
                l = m
            elif inter[m][1] > newinter[1]:
                r = m
            else:
                l, r = m, m
        c, d = l, r

        new = [n for n in newinter]
        if newinter[0] <= inter[a][1] and newinter[1] >= inter[a][0]:
            new[0] = min(new[0], inter[a][0])
        if newinter[1] >= inter[b][0] and new[0] <= inter[b][1]:
            new[0] = min(new[0], inter[b][0])
        if newinter[0] <= inter[c][1] and newinter[1] >= inter[c][0]: 
            new[1] = max(new[1], inter[c][1])
        if newinter[1] >= inter[d][0] and new[0] <= inter[d][1]:
            new[1] = max(new[1], inter[d][1])
        ref = d
        if inter[c][0] > new[1]:
            ref = c
        for i in range(len(inter)):
            if i == ref and new[1] <= inter[i][0]:
                result.append(new)
            if inter[i][1] < newinter[0] or inter[i][0] > newinter[1]:
                result.append(inter[i])
            if i == ref and new[1] > inter[i][0]:
                result.append(new)

        return result 