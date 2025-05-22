var jump = function(nums) {
    let dp = {}, a;
    function rec(i){
        if (i === nums.length - 1) return 0;
        if (i in dp) return dp[i];
        dp[i] = Infinity;
        if (i + nums[i] < nums.length){
            for (let j = 0; j < nums[i]; j++){
                a = 1 + rec(i + j + 1);
                if (a < dp[i]) dp[i] = a;
            }
        }
        else{
            for (let j = 0; j < nums.length - i - 1; j++){
                a = 1 + rec(i + j + 1);
                if (a < dp[i]) dp[i] = a;
            }
        }
        return dp[i];
    }
    return rec(0);
};