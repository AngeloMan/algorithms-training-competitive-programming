class Solution:
    def scheduleCourse(self, courses: List[List[int]]) -> int:
        import heapq
        courses = sorted(courses, key = lambda x: x[1])
        pq = []
        total = 0
        for d, l in courses:
            if d <= l:
                if total + d <= l:
                    total += d
                    heapq.heappush(pq, -d)
                elif pq and -pq[0] > d:
                    total += d + heapq.heappop(pq)
                    heapq.heappush(pq, -d)
        return len(pq)