var countPrimes = function(n) { 
    if (2 >= n) return 0;
    let total = 1;
    let dic = {}, kp = true;
    let a, si;
    for (i = 3; i < n; i += 2){
        if (i in dic){
            si = dic[i];
            a = i + (2 * si)
            kp = true;
            while ((a in dic)&&(kp)){
                a += (2 * si);
                if (a > n) kp = false;
            }
            if (kp) dic[a] = si;   
        }
        else{
            total += 1;
            if (3 * i < n){
                a = i + (2 * i);
                kp = true;
                while ((a in dic)&&(kp)){
                    a += 2 * i;
                    if (a > n) kp = false;
                }
                if (kp) dic[a] = i;   
            }
        }
    }
    return total;
};