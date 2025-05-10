var calculate = function(s) {
    const ops = ['+', '-'];

    function calc(index){  

        let a = '', b = null, op = null, i = index;
        while (i < s.length + 1){
            if (s[i] != ' '){
                let vi;
                if (s[i] === '(') {
                    vi = calc(i + 1), i = vi[1] + 1;
                    if (op){
                        if (op === ops[0]) a = (Number(a) + vi[0]).toString();
                        if (op === ops[1]) a = (Number(a) - vi[0]).toString();
                    }
                    else b = vi[0].toString();
                    continue;
                    
                }
                if (s[i] != ')' && i != s.length ){
                    if (!(ops.includes(s[i]))){
                        if (!b) b = s[i];
                        else b += s[i];
                    }
                    else{
                        if (op){
                            if (op === ops[0]) a = (Number(a) + Number(b)).toString();
                            if (op === ops[1]) a = (Number(a) - Number(b)).toString();
                        }
                        else {
                            if (b) a = b;
                            else a = '0';
                        }
                        op = s[i], b = null;
                    }
                    
                }
                else{
                    if (op === ops[0]) return [Number(a) + Number(b), i];
                    if (op === ops[1]) return [Number(a) - Number(b), i];
                    return [Number(b), i];
                }
            }
            i++;    
        }
    }
    return Number(calc(-1)[0])
};