/**
 * @param {number} n
 * @return {number}
 */
var numSquares = function(n) {
    let limit = Math.floor(Math.sqrt(n));
    const coins = Array.from({length: limit}, (_,n) => (n + 1)**2);
    let ch = {};
    function recursive(i, t){
        if ((i, t) in ch) return ch[(i, t)];
        if (t === n) return 0;
        ch[(i, t)] = Infinity;
        let save = t;
        let j = i;
        while (j < coins.length){
            t = save; 
            if ((t + coins[j] <= n - coins[j]) || (t + coins[j] === n)){
                ch[(i, t)] = Math.min(recursive(j, t + coins[j]) + 1, ch[(i, t)]);
            }
            j++            
        }
        return ch[(i, t)];
    }
    return recursive(0, 0);
};