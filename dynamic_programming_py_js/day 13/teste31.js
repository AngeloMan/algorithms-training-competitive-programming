var reverseList = function(head) {
    if (head === null){
        return head;
    }
    let current = head;
    let cnext = null;
    while (current != null){
        let n = current.next;
        current.next = cnext;
        cnext = current;
        if (n === null){
            return current;
        } 
        else{
            current = n;
        }
    }
};