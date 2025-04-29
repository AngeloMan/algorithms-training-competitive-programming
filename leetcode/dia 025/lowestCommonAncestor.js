//50ms 87% 
var lowestCommonAncestor = function(root, p, q) {
    function include(node, target){
        if (!node) return false;
        if (node.val === target.val) return true;
        return include(node.left, target)||include(node.right, target);
    }
    function rec(node){
        let a, b;
        if (node.val != p.val && node.val != q.val){
            a = include(node.left, p);
            b = include(node.right, p);
            if ((a && include(node.right, q))||(b && include(node.left, q))) return node;   
            if (a) return rec(node.left);
            if (b) return rec(node.right);
        }
        else return node;
    }
    return rec(root);
};
//60ms 60%
// var lowestCommonAncestor = function(root, p, q) {
//     function rec(node){
//         if ((node.val === p.val || node.val === q.val)||(p.val < node.val && node.val < q.val)||(q.val < node.val && node.val < p.val)) return node;
//         if (node.val > p.val) return rec(node.left);
//         if (node.val < p.val) return rec(node.right);
//     }
//     return rec(root);
// };