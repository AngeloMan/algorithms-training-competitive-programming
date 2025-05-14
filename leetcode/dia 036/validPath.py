class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        if source == destination:
            return True
        paths = {i:set() for i in range(n)}
        for p in edges:
            paths[p[0]].add(p[1])
            paths[p[1]].add(p[0])
        del edges
        dp = dict()
        s = set()
        def rec(o, d):
            dp[(o, d)] = False 
            for u in paths[o]:
                if d == u:
                    return True
                elif not u in s:
                    s.add(u)
                    if not (u, d) in dp:
                        dp[(o, d)] = dp[(o, d)] or rec(u, d)
                    s.remove(u)
            return dp[(o, d)]  
        return rec(source, destination)