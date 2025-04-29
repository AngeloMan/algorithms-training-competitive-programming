var levelOrder = function(root) {
    let layers = [], h = -1;
    function rec(l, node){
        if (node === null) return;
        if (l < layers.length) layers[l].push(node.val);
        else layers.push([node.val]);
        rec(l + 1, node.left), rec(l + 1, node.right);
    }
    rec(0, root);
    return layers;
};

//0ms