var maxDepth = function(root) {
    function rec(node){
        if (node === null) return 0;
        return Math.max(rec(node.left) + 1, rec(node.right) + 1);
    }
    return rec(root);
};