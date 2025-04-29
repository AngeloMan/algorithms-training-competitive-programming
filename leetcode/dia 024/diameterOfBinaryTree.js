var diameterOfBinaryTree = function(root) {
    if ((root === null)||((root.left === null)&&(root.right === null))) return 0;
    function maxDepth(node){
        if (node === null) return 0;
        return Math.max(maxDepth(node.left) + 1, maxDepth(node.right) + 1);
    }
    function rec(node){
        if (node === null) return 0;
        return Math.max(maxDepth(node.left) + maxDepth(node.right), rec(node.left), rec(node.right));
    }
    return Math.max(maxDepth(root) - 1, rec(root));
};