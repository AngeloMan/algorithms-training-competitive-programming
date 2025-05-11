var kthSmallest = function(root, k) {
    let index = 1, result = null, cont = true;
    function depth(node){
        if (cont){
            if (node.left === null && node.right === null){
                if (index === k){
                    result = node.val, cont = false;
                }
                index++;
                return;
            }
            if (node.left != null && cont){
                depth(node.left)
            }
            if (index === k && cont){
                    result = node.val, cont = false;
                    return;
            }
            index++;
            if (node.right != null && cont){
                depth(node.right);
            }
        }
    }
    depth(root);
    return result;
};