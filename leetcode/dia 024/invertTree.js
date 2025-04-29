var invertTree = function(root) {
    if (root === null) return null;
    function rec(node){
        let left = node.left;
        node.left = node.right;
        node.right = left;
        if (node.left != null) node.left = rec(node.left);
        if (node.right != null) node.right = rec(node.right);
        return node;
    }
    return rec(root);

};