const treeSum = (root) => {
    let sum = 0;
    function rec(node){
          if (node === null) return;
          sum += node.val;
          rec(node.left);
          rec(node.right);
          return;
      }
      rec(root)
      return sum;
};