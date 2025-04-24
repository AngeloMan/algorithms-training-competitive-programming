def return_int_list(ran = 1):
    list_ = []
    for i in range(ran):
        list_.append([int(x) for x in str(input()).split()])
    return list_

if __name__ == "__main__":
  
    list_ = return_int_list()[0]
    e, m, d = list_
     
    friend = return_int_list(m)
    enemy = return_int_list(d)
    trios = return_int_list(int(e/3))
    counter = 0
    my_set = set()
    
    for i in friend:
        for j in trios:
            if (i[0] in j or i[1] in j) and (i[0] not in my_set):
                my_set.add(i[0])
                if i[0] in j and i[1] in j:
                    ...
                else:
                    counter += 1
    
    my_set = set()
  
    for i in enemy:
        for j in trios:
            if (i[0] in j or i[1] in j) and (i[0] not in my_set):
                my_set.add(i[0])
                if i[0] in j and i[1] in j:
                    counter += 1
  
    print(counter)