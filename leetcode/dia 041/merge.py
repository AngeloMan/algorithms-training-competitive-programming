class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals = sorted(intervals)
        i, result = 0, []
        while i < len(intervals):
            current = intervals[i]
            while i + 1 < len(intervals) and intervals[i + 1][0] <= current[1]:
                current[1] = max(intervals[i + 1][1], current[1])
                i += 1
            i += 1
            result.append(current)
        return result        