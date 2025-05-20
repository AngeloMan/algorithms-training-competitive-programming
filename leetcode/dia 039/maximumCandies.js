var maximumCandies = function(candies, k) {
    let max = -Infinity, sum = 0;
    for (i = 0; i < candies.length; i++){
        sum += candies[i];
        max = Math.max(max, candies[i]);
    }
    if (sum < k) return 0;
    let l = 1, r = max, result = null, total;
    while (l <= r){
        total = 0;
        m = Math.floor((r + l)/2);
        for (i = 0; i < candies.length; i++) total += Math.floor(candies[i]/m);
        if (total >= k){
            l = m + 1;
            result = m;
        }
        else r = m - 1;
    }
    return result;
};