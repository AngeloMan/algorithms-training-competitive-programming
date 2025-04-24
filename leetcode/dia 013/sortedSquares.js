/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    if (nums.length === 1){
        return [nums[0]**2];
    }
    let l = 0;
    let r = nums.length - 1;
    let arr = [];
    for (i = 0; i < nums.length; i++){
        nums[i] = nums[i]**2;
    }
    while (l < r){
        if (nums[r] >= nums[l]){
            arr.push(nums[r]);
            r -= 1;
        }
        else if (nums[r] < nums[l]){
            arr.push(nums[l]);
            l += 1;
        }
        if (l == r){
            arr.push(nums[l])
        }
    }
    arr.reverse();
    return arr;
};