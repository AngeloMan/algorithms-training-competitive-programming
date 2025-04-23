/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    let result = [];
    nums.sort((a,b) => a-b)
    let last = 100001;
    for (i = 0; i < nums.length - 2; i ++){
        if (nums[i] !== last){
            last = nums[i];
            let target = -nums[i];
            let l = i + 1;
            let r = nums.length - 1;
            while (r > l){
                if ((nums[r] + nums[l] === target)){
                    result.push([nums[i], nums[l], nums[r]]);
                    r--;
                    while (nums[r] === nums[r + 1]){
                        r -= 1;
                    }
                    l++;
                    while (nums[l] === nums[l - 1]){
                        l++;
                    }

                }
                if (nums[r] + nums[l] > target){
                    r--;
                    while (nums[r] === nums[r + 1]){
                        r -= 1;
                    }
                    
                }
                if (nums[r] + nums[l] < target){
                    l +=1;
                    while (nums[l] === nums[l - 1]){
                        l++;
                }
                }
            }
        }
        } 

    return result;
};
