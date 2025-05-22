var pathSum = function(root, targetSum) {
    let result = [], c = [];
    function rec(node, sum){
        if (node === null) return;
        if (node.left != null || node.right != null){
            c.push(node.val);
            if (node.left != null) rec(node.left, sum + node.val);
            if (node.right != null) rec(node.right, sum + node.val);
            c.pop()
        }
        else{
            if (sum + node.val === targetSum) result.push([...c,node.val]);
        }
    }
    rec(root, 0)
    return result;
};