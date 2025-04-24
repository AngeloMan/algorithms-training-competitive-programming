/**
 * @param {number} n
 * @return {number}
 */
var trailingZeroes = function(n) {
    let total = 0;
    let a;
    for (i = 0; i < n + 1; i += 5){
        a = i;
            while((a > 0)&&(a % 5 === 0)){
                a /= 5;
                total ++;
            }
    }
    return total;
}; 