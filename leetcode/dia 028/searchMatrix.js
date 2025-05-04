var searchMatrix = function(nums, target) {
    const m = nums.length, n = nums[0].length;
    let k = 0;
    let fi = 0, fj = 0, si = m - 1, sj = n - 1;
       
    while (nums[fi][fj] <= target && nums[si][sj] >= target){
        while(nums[fi][sj] < target && fi < m - 1) fi++;
        while(nums[si][fj] < target && fj < n - 1) fj++;
        while(nums[fi][sj] > target && sj > 0) sj--;
        while(nums[si][fj] > target && si > 0) si--;
        if (nums[fi][fj] === target || nums[si][sj] === target ||nums[fi][sj] === target || nums[si][fj] == target) return true;
    }
    return false;
};