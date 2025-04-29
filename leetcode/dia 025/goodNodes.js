var goodNodes = function(root) {
    function rec(node, max){
        if (node === null) return 0;
        let current = 0;
        if (node.val >= max){
            current += 1;
        }
        return current + rec(node.left, Math.max(max, node.val)) + rec(node.right, Math.max(max, node.val));
    } 
    return rec(root, -Infinity); 
};