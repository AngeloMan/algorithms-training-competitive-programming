var missingRolls = function(rolls, mean, n) {
    let result = [], k = 0;
    const sum = rolls.reduce((a, b) => a + b), total = (mean * (rolls.length + n));
    const nav = Math.floor((total - sum)/n); 
    let tsn = total - sum - (nav * n);
    if (nav > 6|| nav < 1) return [];
    for (i = 0; i < n; i++) result.push(nav);
    while (tsn >= 1){
        tsn--, result[k]++;
        if (result[k] > 6) return [];
        k++;
        if (k === n) k = 0;
    }
    return result;
};