var countNumbersWithUniqueDigits = function(n) {
    if (n === 0) return 1;
    function rec(n){
        if (n === 1) return 10;
        const last = rec(n - 1);
        let total = 9;
        for (i = 1; i < n; i++){
            total = total * (10 - i);
        }
        return total + last;
    }
    return rec(n);
};