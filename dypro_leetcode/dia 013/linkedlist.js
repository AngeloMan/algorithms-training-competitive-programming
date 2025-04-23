class Node{
    constructor(val){
      this.val = val;
      this.next = null;
    }
  }

function print_link(head){
  if (head === null){
      return;
  }
  console.log(head.val);
  print_link(head.next);
  }

function linked_arr(head){
  let arr = [];
  let current = head;
  while (current != null){
    arr.push(current.val);
    current = current.next;
  }
  return arr;
}

function linked_arr_rec(head, values = []){
  if (head === null) return;
  values.push(head.val);
  linked_arr_rec(head.next, values); 
  return values;
}

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

function linked_arr_rec(head, values = []){
  if (head === null) return;
  values.push(head.val);
  linked_arr_rec(head.next, values); 
  return values;
}
function sum_link(head){
  let sum_ = 0;
  let current = head;
  while (current != null){
    sum_ += current.val;
    current = current.next
  } 
  return sum_;
}
function sum_link_rec(head){
  if (head === null) return 0 ;
  let sum_ = head.val;
  sum_ += sum_link_rec(head.next)
  return sum_;
}
function find_not_recursive(list, value){
  while (true){
    if (list === null) return false;
    if (list.val === value) return true;
    list = list.next;
  }
}

function find_recursive(list, value){
  if (list === null) return false;
  if (list.val === value) return true;
  return find_not_recursive(list.next, value);
}

function getnodevalue(list, n, index = 0){
  if (list === null) return 'out of length';
  if (index === n) return list.val;
  index++
  return getnodevalue(list.next, n, index);
}


console.log(linked_arr(a));
  
const a = new Node(12);
const b = new Node(112);
const c = new Node(22);
const d = new Node(62);
const e = new Node(92);

a.next = b;
b.next = c;
c.next = d;
d.next = e;



print_link(a);
console.log(sum_link(a));

