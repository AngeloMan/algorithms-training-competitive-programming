var maxSubArray = function(nums) {
    let total = - Infinity, max = - Infinity;
    for (let i = 0; i < nums.length; i++){
        if (nums[i] > total && total < 0) total = nums[i];
        else total += nums[i];
        max = Math.max(total, max);
    }
    return max;
};