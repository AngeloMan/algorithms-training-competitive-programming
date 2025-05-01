var getPermutation = function (n, k) {
    k--;
    let result = [], fch = {}, arr = [];

    for (let i = 1; i <= n; i++) {
        arr.push(i);
    }

    function factorial(n) {
        if (n === 0) return 1;
        if (n in fch) return fch[n];
        fch[n] = n * factorial(n - 1);
        return fch[n];
    }
    let index;
    function rec(n, k) {
        if (n === 0) return;
        let a = factorial(n - 1);
        index = Math.floor(k / a);
        result.push(arr[index]);
        arr.splice(index, 1);
        rec(n - 1, k - (a * index));
    }
    rec(n, k);
    result = result.join('');
    return result;
};