class Solution:
    def maxProfit(self, n: int, present: List[int], future: List[int], hierarchy: List[List[int]], budget: int) -> int:
            hierarchy = [[1,2],[2,3]]
            hr = {}
            for h in hierarchy:
                if not h[0] in hr:
                    hr[h[0]] = []
                hr[h[0]].append(h[1])

            def rec(i, cash, s):
                #print(i, cash, s)
                if i >= n or cash == 0:
                    return 0
                h = 0
                
                new = set(s)
                if i + 1 in hr:
                    new.update(hr[i + 1])
                if i + 1 in s:
                   
                    if int(present[i]/2) <= cash:
                        h = max(h, rec(i + 1, cash - int(present[i]/2), new) + future[i] - int(present[i]/2))
                else:
                    print(i + 1, future[i] - present[i])
                    if present[i] <= cash:
                        h = max(h, rec(i + 1, cash - present[i], new) + future[i] - present[i])
                h = max(h, rec(i + 1, cash, s))   
                return h

            return rec(0, budget, set())