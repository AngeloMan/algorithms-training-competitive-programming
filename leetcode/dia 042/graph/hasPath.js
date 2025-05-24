//depth
const hasPathd = (graph, src, dst) => {
    let stack = [src], current;
    while (stack.length > 0){
        current = stack.pop();
        for (let i = 0; i < graph[current].length; i++){
            if (graph[current][i] === dst) return true;
            stack.push(graph[current][i]);
        }
    }
    return false;
};

const hasPathdr = (graph, src, dst) => {
    if (src === dst) return true;
    for (let i = 0; i < graph[src].length; i++){
        if (hasPathdr(graph, graph[src][i], dst)) return true;
    }
    return false;
};


//breadth
const hasPathb = (graph, src, dst) => {
    let queue = [src], current;
    while (queue.length > 0){
        current = queue.shift();
        for (let i = 0; i < graph[current].length; i++){
            if (graph[current][i] === dst) return true;
            queue.push(graph[current][i]);
        }
    }
    return false;
};

