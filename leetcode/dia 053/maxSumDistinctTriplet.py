class Solution:
    def maxSumDistinctTriplet(self, x: List[int], y: List[int]) -> int:
        s = sorted([[x[i], y[i]] for i in range(len(x))], key = lambda x: x[1], reverse = True)
        l, ts = -1, 0
        st = set()
        for n in s:
            if len(st) < 3:
                if not n[0] in st:
                    ts += n[1]
                    st.add(n[0])
            else:
                return ts
        else:
            return -1 if len(st) < 3 else ts
        