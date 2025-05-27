var differenceOfSums = function(n, m) {
    let total = 0;
    for (let i = 1; i <= n; i++){
        if (i % m === 0) total -= i;
        else total += i;
    }
    return total;
};