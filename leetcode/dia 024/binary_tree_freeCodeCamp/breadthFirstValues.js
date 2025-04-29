//primeira tentativa

const breadthFirstValues1 = (root) => {
    let layers = {}, result = [], h = -1;
    function rec(l, node){
        if (node === null) return;
        if (l in layers){
            layers[l].push(node.val);
        }
        else{
            if (l > h) h = l;
            layers[l] = [node.val];
        }
        rec(l + 1, node.left);
        rec(l + 1, node.right);
    }
    rec(0, root);
    for (let i = 0; i < h + 1; i++){
        result.push(...layers[i])
    }
    return result;
};

//refazendo com queue

// const breadthFirstValues = (root) => {
//     if (root === null) return [];
//     let queue = [root], values = [], node;
//     while (queue.length > 0){
//         node = queue.shift();
//         values.push(node.val);
//         if (node.left != null) queue.push(node.left);
//         if (node.right != null) queue.push(node.right);
//     }
//     return values;
// };