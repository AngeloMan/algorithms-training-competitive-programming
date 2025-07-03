class Solution:
    def specialTriplets(self, nums: List[int]) -> int:
        from math import comb
        MOD = 10**9 + 7
        ch = {}
        t = 0 
        for n in nums:
            if not n in ch:
                ch[n] = [0, 0]
            ch[n][0] += 1
        if 0 in ch and (ch[0][0] > 2):
            t += comb(ch[0][0], 3)

        for n in nums:  
            if n != 0 and n in ch:
                if n * 2 in ch:
                    t += ch[n * 2][0] * ch[n * 2][1]
                ch[n][0] -= 1
                ch[n][1] += 1
        return t % MOD
                