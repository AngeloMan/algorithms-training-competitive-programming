//melhor
var isSameTree = function(p, q) {
    function rec(a, b){
        if (!a && !b) return true;
        if ((!a||!b)||(a.val != b.val)) return false;
        return rec(a.left, b.left) && rec(a.right, b.right);
    }
    return rec(p,q);
};
// first attempt
// var isSameTree = function(p, q) {
    //     let check = true;
    //     function rec(a, b){
    //         if ((a === null)&&(b === null)) return;
    //         if ((a === null)||(b === null)){
    //             check = false;
    //             return;
    //         }
    //         if (a.val != b.val){
    //             check = false;
    //             return;
    //         }
    //         rec(a.left, b.left);
    //         rec(a.right, b.right);
    //     }
    //     rec(p,q);
    //     return check;
    // };