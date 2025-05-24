const largestComponent = (graph) => {
    function explore(graph, node, set){
        if (set.has(String(node))) return 0;
        let total = 1
        set.add(String(node))
        for (let neigh of graph[node]){
            total += explore(graph, neigh, set);
        }  
        return total
    }
    let max = 0, set = new Set();
    for (let node in graph){
        max = Math.max(max, explore(graph, node, set));
    }
    return max;
};