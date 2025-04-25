var reorderList = function(head) {
    let a = head;
    if (head.next === null) return head;
    if (head.next.next === null) return head;
    let find, p;
    function rec(h){
        if (h === null) return a;
        find = h;
        while (find.next != null){
            p = find;
            find = find.next
        }
        p.next = null;
        n = h.next;
        h.next = find;
        find.next = n;
        return rec(n);

    }
    return rec(head)
};
