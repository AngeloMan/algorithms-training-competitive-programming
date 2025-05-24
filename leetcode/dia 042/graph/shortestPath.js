const shortestPath = (edges, nodeA, nodeB) => {
    let graph = {};
    for (let e of edges){
        if (!(e[0] in graph)) graph[e[0]] = [];
        if (!(e[1] in graph)) graph[e[1]] = [];
        graph[e[0]].push(e[1]);
        graph[e[1]].push(e[0]);
    };
    function breadth(f, t){
        let queue = [[f, 0]], set = new Set(f);
        while (queue.length > 0){
            c = queue.shift();
            for (let n of graph[c[0]]){
                if (n === t) return c[1] + 1;
                if (!set.has(n)){
                    queue.push([n, c[1] + 1]);
                    set.add(n);
                }
            }
        }
        return -1;
    }
    return breadth(nodeA, nodeB);
};