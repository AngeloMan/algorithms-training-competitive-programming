var findMaxAverage = function(nums, k) {
    let l = 0;
    let r = k - 1;
    let total =  0;
    for (i = 0; i < k; i++){
        total += nums[i];
    }
    let max = total;
    while (r < nums.length){
        total -= nums[l];
        l++;
        r++;
        total += nums[r];
        if (total > max) max = total; 
    }
    return max/k;
};