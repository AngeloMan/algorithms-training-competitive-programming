var buildTree = function(preorder, inorder) {
    function rec(pre, lin, rin){
        if (lin > rin||lin === rin){
          if (preorder[pre]) return new TreeNode(preorder[pre]);
          return null;
        }
        let value = inorder.indexOf(preorder[pre]);
        if (lin === value) return new TreeNode(preorder[pre], null,rec(pre + value + 1 - lin, value + 1, rin));
        if (rin === value) return new TreeNode(preorder[pre], rec(pre + 1, lin, value - 1),null);
        return new TreeNode(preorder[pre], rec(pre + 1, lin, value - 1),rec(pre + value + 1 - lin, value + 1, rin))
    }
    return rec(0, 0, inorder.length - 1)
};