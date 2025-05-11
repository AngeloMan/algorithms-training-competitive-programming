class Solution:
    def minDeletion(self, s: str, k: int) -> int:
        dic = {}
        for i in s:
            if i in dic:
                dic[i] += 1
            else:
                dic[i] = 1
        ordn, total = sorted(dic, key = lambda a: dic[a], reverse = True), len(s)
        if k >= len(ordn):
            return 0
        for i in range(k):
            total -= dic[ordn[i]]
        return total
        
        