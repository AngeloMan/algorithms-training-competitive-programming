if __name__ == "__main__":
    n = int(input())
    list_ = []
    for i in range(n):
        list_.append(int(input()))
      
    subs_ = [] 
  
    for i in range(n):
        for j in range(n - i):
            sub_con = []
            for k in range(i + 1):
                sub_con.append(list_[j + k])
            if not sub_con in subs_:
                different = True
                for u in sub_con:
                    if sub_con.count(u) > 1:
                        different = False
                if different:
                    subs_.append(sub_con)
            else:
                ...
    
    print(subs_)
    print(sorted(subs_, reverse=True, key= lambda x: len(x)))
                
    for i in subs_:
        print(i)