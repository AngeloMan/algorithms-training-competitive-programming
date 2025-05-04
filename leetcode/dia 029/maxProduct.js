var maxProduct = function(n) {
    const str = n.toString();
    let h = Math.max(Number(str[0]), Number(str[1])), lh = Math.min(Number(str[0]), Number(str[1])), c = null, i = 2;
    while (i < str.length){
        c = Number(str[i]);
        if (c > h){
            lh = h;
            h = c;
        }
        else{
            if (c > lh) lh = c;
        }
        i++
    }
    return h * lh;
};