class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        graph, s = {}, set()
        for e in edges:
            if (not e[0] in graph):
                graph[e[0]] = []
            if (not e[1] in graph):
                graph[e[1]] = []
            graph[e[0]].append(e[1])   
            graph[e[1]].append(e[0])
        def depth(f, t):
            if f == t:
                return True
            if not f in s:
                s.add(f)
                for n in graph[f]:
                    if depth(n, t):
                        return True
            return False
        return depth(source, destination)