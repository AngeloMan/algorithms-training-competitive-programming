var combine = function(n, k) {
    let result = [], c = [];
    function rec(v, index){
        if (index === k){
            c.push(v);
            result.push(c.slice());
            c.pop();
            return;
        }
        for (let i = v + 1; i <= n; i++){
            if (v != 0) c.push(v);
            rec(i, index + 1);
            c.pop();
        }
    }
    rec(0, 0)
    return result;
};
