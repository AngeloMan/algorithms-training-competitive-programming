var removeNthFromEnd = function(head, n) {
    function reverse(llist) {
        if (llist == null) return null;
        let current = llist;
        let next = null;
        let prev;
        while (true) {
            prev = current.next;
            current.next = next;
            next = current;
            if (prev === null) return current;
            current = prev;
        }
    }
    head = reverse(head);
    let a = head;
    let i = 1;
    let current = head;
    let prev = null;
    if (n === 1) return reverse(current.next);
    while (i != n){
        prev = current;
        current = current.next;
        i++;
    }
    prev.next = current.next;
    return reverse(a);
};