const graph = {
  a: ['c','b'],
  b: ['d'],
  c: ['e'],
  d: ['f'],
  e: [],
  f: []
};
function depth(start){
    let stack = [start], result = [];
    while (stack.length > 0){
        current = stack.pop();
        result.push(current);
        for (let i = 0; i < graph[current].length; i++){
            stack.push(graph[current][i]);
        }
    };
    return result;
}
console.log(depth('a'))
    
function breadth(start){
    let queue = [start], result = [];
    while (queue.length > 0){
        current = queue.shift();
        result.push(current);
        for (let i = 0; i < graph[current].length; i++){
            queue.push(graph[current][i]);
        }
    } 
    return result;
}
console.log(breadth('a'));
