var rotateRight = function(head, k) {
    if (head === null) return head;
    let len = 1, c = head;
    while (c.next != null){
        len++;
        c = c.next;
    }
    k = k%len;
    if (k === 0) return head;
    let a = head;
    for (i = 0; i < len - k - 1; i++){
        a = a.next;
    }
    let nhead = a.next;
    a.next = null;
    c.next = head;
    return nhead;
};