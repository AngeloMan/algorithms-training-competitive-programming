var findNthDigit = function(n) {
    if (n < 10) return n;
    let jump = 0, a = 0, x = n;
    while (n > jump + (9 * (10 ** (a)) * (a + 1))){
        jump +=  9 * (10 ** (a)) * (a + 1);
        a += 1;
    }
    num = 10 ** a;
    x -= jump;
    while (x > a + 1){
        num += 1;
        x -= a + 1;
    }
    num = num.toString();
    return Number(num[x - 1]);
};