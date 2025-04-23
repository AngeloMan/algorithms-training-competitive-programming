/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let l = 0;
    let r = 0;
    let max = 0;
    while (r < prices.length){
        r++;   
        a = prices[r] - prices[l];
        if (a > max) max = a;
        if (prices[r] < prices[l]) l = r;
    }
    return max;
};