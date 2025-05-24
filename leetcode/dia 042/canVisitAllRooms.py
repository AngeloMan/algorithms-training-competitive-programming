class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        def search(s, i):
            if i in s:
                return 0
            s.add(i)
            total = 1
            for n in rooms[i]:
                total += search(s, n)
            return total         
        s = set()
        return search(s, 0) == len(rooms)