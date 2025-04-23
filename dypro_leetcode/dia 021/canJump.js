var canJump = function(nums) {
    let dp = {};
    function rec(index){
        if (index + nums[index] >= nums.length - 1) return true;
        if (index in dp) return dp[index];
        dp[index] = false;
        for (let i = index + 1; i < 1 + index + nums[index]; i ++){
            if (rec(i)) {
                return true;
            }
        }  
        return false;
    }
    return rec(0);
};