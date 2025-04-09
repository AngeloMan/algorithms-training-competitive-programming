const zipperLists = (head1, head2) => {
  let a = head1;
  let b = head2;
  if (a === null) return b;
  let head = a;
  let next = null;
  while ((a != null) && (b != null)){
    if (b === null) return head;
    next = a.next;
    a.next = b;
    if (next === null){
      return head
    }
    a = b;
    b = next;
  }
  
};

module.exports = {
  zipperLists,
};
