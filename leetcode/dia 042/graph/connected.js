// const connectedComponentsCount = (graph) => {
//     let set = new Set(), total = 0, queue;
//     const gp = Object.keys(graph);
//     for (let i = 0; i < gp.length; i++){
//         if (!set.has(Number(gp[i]))){
//             total++;
//             queue = [Number(gp[i])];
//             while (queue.length > 0){
//                 current = queue.shift();
//                 set.add(current);
//                 for (let j = 0; j < graph[current].length; j++){
//                     if (!set.has(graph[current][j])) queue.push(graph[current][j]);
//                 }
//             }
//         }
//     }
//     return total;
// };

const connectedComponentsCount = (graph) => {
  function check(graph, node, set){
      console.log(node, set)
      if (set.has(String(node))) return false;
      set.add(String(node));
      for (let ne of graph[node]){
          check(graph, ne, set);
      }
      return true;
  }  
  let c = 0, set = new Set();
    for (let node in graph){
        if (check(graph, node, set)) c++;
    }
    return c;
};

