var isValidBST = function(root) {
    function rec(node){
        if (!node.left && !node.right) return [true, node.val, node.val, node.val];
        if (!node.left){
            let b = rec(node.right);
            let rbool = b[0], rmin = b[1], rmax = b[2], rc = b[3];
            return [rbool && node.val < rmin,  Math.min(rmin, node.val), Math.max(rmax, node.val), node.val];
        }
        if (!node.right){
            let a = rec(node.left);
            let lbool = a[0], lmin = a[1], lmax = a[2], lc = a[3];
            return [lbool && node.val > lmax, Math.min(lmin, node.val), Math.max(lmax, node.val), node.val];
        }
        else{
            let a = rec(node.left);
            let b = rec(node.right);
            let lbool = a[0], lmin = a[1], lmax = a[2], lc = a[3];
            let rbool = b[0], rmin = b[1], rmax = b[2], rc = b[3];
            return [lbool && rbool && node.val > lmax && node.val < rmin, Math.min(lmin, rmin, node.val), Math.max(lmax, rmax, node.val), node.val];
        }
    }
    return rec(root)[0];
};