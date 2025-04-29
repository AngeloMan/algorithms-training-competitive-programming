var isSubtree = function(root, subRoot) {
    let check = false;
    function isSameTree(a, b){
        if (!a && !b) return true;
        if ((!a||!b)||(a.val != b.val)) return false;
        return isSameTree(a.left, b.left) && isSameTree(a.right, b.right);
    }
    let queue = [root], current;
    while (queue.length > 0){
        current = queue.shift()
        if (current.val === subRoot.val && !check) check = isSameTree(current, subRoot);
        if (current.left) queue.push(current.left);
        if (current.right) queue.push(current.right);
    }
    return check;
};