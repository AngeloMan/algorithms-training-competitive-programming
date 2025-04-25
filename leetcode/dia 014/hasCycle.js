var hasCycle = function(head) {
    if (head === null) return false;
    let s = head;
    let f = head;
    while ((f != null) && (f.next != null)){ 
        f = f.next.next;
        s = s.next
        if (s === f) return true;
    }
    return false;

};
