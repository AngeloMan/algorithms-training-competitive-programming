var mergeTwoLists = function(list1, list2) {
    if ((list1 === null)&&(list2 === null)) return null;
    if ((list1 === null)&&(list2 != null)) return list2;  
    if ((list1 != null)&&(list2 === null))return list1;

    let f, s;
    if (list1.val <= list2.val){
        f = list1;
        s = list2;
    }
    else{
        s = list1;
        f = list2;
    }
    let a = f;
    while ((f != null) && (s != null)){
        if ((f === null) || (s === null)) return a;
        let next = s;
        if ((f.next != null) && (f.next.val < s.val)){
            next = f.next; 
        } 
        else{
            s = f.next
        }
        f.next = next;
        f = next;

    }
    return a;
};