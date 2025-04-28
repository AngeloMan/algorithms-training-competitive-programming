const treeMinValue = (root) => {
    let queue = [root], node, min = Infinity;
    while (queue.length > 0){
        node = queue.shift();
        min = Math.min(min, node.val);
        if (node.left != null) queue.push(node.left);
        if (node.right != null) queue.push(node.right);
    }
    return min;
};