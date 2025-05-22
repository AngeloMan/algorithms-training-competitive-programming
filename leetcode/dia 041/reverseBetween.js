var reverseBetween = function(head, left, right) {
    function rev(node, p){
        let prev = p, current = node, next;
        while (current != p){
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        } 
        return prev;
    }
    let i = 0, search = head, lnode, bfl = null;
    while (i < right){
        if (i === left - 2) bfl = search;
        if (i === left - 1) lnode = search;
        i++;
        search = search.next;
    }
    if (bfl){
        bfl.next = rev(lnode, search);
        return head
    }
    else{
        return rev(lnode, search);
    }
    
};