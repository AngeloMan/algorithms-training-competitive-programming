class Solution:
    def copyRandomList(self, head):
        if head == None:
            return None
        cache = {}
        a = head
        last = None
        while a != None:
            new = Node(a.val, None)
            if last != None:
                last.next = a
            cache[a] = new
            last = a
            a = a.next
            if a == None:
                last.next = None
        
        k = 1
        for i in cache:
            if i.random != None:
                cache[i].random = cache[i.random]
            if i.next != None:
                cache[i].next = cache[i.next]
            if k == 1:
                k = i
        return cache[k]