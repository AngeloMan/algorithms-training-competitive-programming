var partition = function(s) {
    let result = [];
    function check(word){
        if (!word) return true;
        for (let i = 0; i < Math.floor(word.length/2); i++){
            if (!(word[0 + i] === word[word.length - 1 - i])) return false;
        }
        return true;
    }
    function rec(l, r, sub){
        if (r === s.length - 1){
            if (check(s.slice(l, r + 1)) && (check(sub[sub.length - 1]))){     
                sub.push(s.slice(l, r + 1));
                result.push(sub);
            }
            return;
        }
        if (sub.length > 0) {
            if (!(check(sub[sub.length - 1]))) return;
        }
        rec(r + 1, r + 1, [...sub, s.slice(l, r + 1)]);
        rec(l, r + 1, sub);   
    }
    rec(0, 0, [], false);
    return result;
};
