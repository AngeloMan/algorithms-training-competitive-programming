var combinationSum4 = function(nums, target) {
    dp = {};
    function rec(total){
        if (total === target) return 1;
        if (total > target) return 0;
        if (total in dp) return dp[total];
        dp[total] = 0;
        for (let i = 0; i < nums.length; i++){
            dp[total] += rec(total + nums[i]);
        }
        return dp[total];
    }
    return rec(0)
};