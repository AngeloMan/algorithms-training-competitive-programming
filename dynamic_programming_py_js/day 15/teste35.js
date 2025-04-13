function check_len(l){
    let i = 0;
    while (l != null){
        l = l.next;
        i++;
    }
    return i;
}
let a = l1;
let b = l2;
if (check_len(l2) > check_len(l1)){
    a = l2;
    b = l1;
}
let head = a;
let extra = 0;
let loop = true;
while ((loop != false) && (a != null)){
    if ((b === null) && (extra > 0)){
        a.val += extra;
    }
    else if(b != null){
        a.val += b.val + extra;
        b = b.next
    }
    extra = 0;
    while (a.val >= 10){
            a.val -= 10;
            extra++;
        }
    if ((extra > 0) && (a.next === null)){
        a.next = new ListNode(extra, null);
        return head
    }
    a = a.next
}
return head;       
