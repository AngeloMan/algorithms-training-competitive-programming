class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        a = len(matrix)
        ilist = [0 for n in range(a)]
        total = 0
        current = None
        while total != k:
            si = None
            value = float('inf')
            total += 1
            for i in range(a):
                if ilist[i] < a:
                    if matrix[i][ilist[i]] < value:
                        value = matrix[i][ilist[i]]
                        si = i
            ilist[si] += 1
        return value