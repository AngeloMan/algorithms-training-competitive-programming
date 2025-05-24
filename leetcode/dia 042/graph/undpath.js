const undirectedPath = (edges, nodeA, nodeB) => {
    let graph = {}, set = new Set();
    for (let i = 0; i < edges.length; i++){
        console.log(graph)
        if (edges[i][0] in graph) graph[edges[i][0]].push(edges[i][1]);
        else graph[edges[i][0]] = [edges[i][1]];
      
        if (edges[i][1] in graph) graph[edges[i][1]].push(edges[i][0]);
        else graph[edges[i][1]] = [edges[i][0]];
    }
    function depthrec(f, t){
      if (f === t) return true;
      set.add(f);
      for (let i = 0; i < graph[f].length;i++){
          if (!set.has(graph[f][i]) && depthrec(graph[f][i], t)) return true;
      }
      set.delete(f);
      return false;
    }
    return(depthrec(nodeA, nodeB))
};