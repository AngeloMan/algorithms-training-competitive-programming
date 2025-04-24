var reverseKGroup = function(head, k) {
    let mh = null;
    let new_tail = null;
    let last = null
    let current = head;
    let i = 1;
    let next = null;
    let test;
    let old = null;
    let al = true;
    while (current != null){
        next = current.next;
        if (i === 1){
            new_tail = current; 
            test = current
            for (j = 0; j < k - 1; j++){
                test = test.next;
                if (test === null){
                    old.next = current;
                    console.log(old.data)
                    return mh;
                }
            }
            if (test.next === null){
                current.next = null;
                al = false;
            }
        }    
        if (al) current.next = last;
        al = true;
        if (i === k){
            if (mh === null) mh = current;
            i = 1;
            if (old != null) old.next = current;
            old = new_tail;
        }
        
        else{ 
            i++;
            last = current;
            }
        current = next;     
    }   
    return mh;
};