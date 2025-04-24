class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        dic = {l:l for l in lists}
        keep = True
        last = None
        arr = []
        while keep:
            keep = False
            m = None
            for i in dic:
                if dic[i] != None:
                    keep = True
                    if m == None:
                        m = i
                    else:
                        if dic[i].val < dic[m].val:
                            m = i
            #
            if m != None:
                arr.append(dic[m])
                dic[m] = dic[m].next
        last = None
        for i in arr[::-1]:
            i.next = last
            last = i
             
        return last