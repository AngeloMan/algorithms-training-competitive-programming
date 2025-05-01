var numTrees = function(n) {
    let dp = {'0': 1, '1': 1, '2': 2 };
    function rec(n){
        if (n in dp) return dp[n];
        dp[n] = 0;
        for (let i = 1; i <= n; i++){
            dp[n] += rec(i - 1) * rec(n - i);
        }
        return dp[n];
    }
    return rec(n);
};