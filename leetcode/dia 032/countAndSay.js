var countAndSay = function(n) {
    function countn(n) {
        let result = '', last = null, c = 0;
        for (i = 0; i < n.length; i++){
            if (n[i] === last) c++;
            else{
                if (last != null) result += c.toString() + last;
                last = n[i];
                c = 1;
            }
        }
        result += c.toString() + last;
        return result
    }
    let a = '1';
    for (let i = 0; i < n - 1; i++){
        a = countn(a);
    }
    return a;
};