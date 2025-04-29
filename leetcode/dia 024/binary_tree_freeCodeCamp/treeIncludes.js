const breadTreeIncludes = (root, target) => {
    if (root === null) return false;
    let queue = [root], node;
    while (queue.length > 0){
        node = queue.shift();
        if (node.val === target) return true;
        if (node.left != null) queue.push(node.left);
        if (node.right != null) queue.push(node.right);
    }
    return false;
};

const depthTreeIncludes = (root, target) => {
    function rec(node){
        if (node === null) return false;
        if (node.val === target) return true;
        return ((rec(node.left))||(rec(node.right)))
    }
    return rec(root)
};