var hasPathSum = function(root, targetSum) {
    if (root === null) return false;
    function rec(node, sum){
        if (node.left != null){
            if (rec(node.left, sum + node.val)) return true;
        }
        if (node.right != null){
            if (rec(node.right, sum + node.val)) return true; 
        }
        if (node.left === null && node.right === null) return sum + node.val === targetSum;
        return false;
    }
    return rec(root, 0)
};
