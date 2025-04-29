const depthFirstValues = (root) => {
    let arr = [];
    function rec(node){
        if ((node === null)||(node === undefined)) return;
        else{
            arr.push(node.val);
            rec(node.left);
            rec(node.right);
        }
    }
    rec(root);
    return arr;
};


