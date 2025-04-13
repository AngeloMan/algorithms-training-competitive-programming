var search = function(nums, target) {
    if (nums.length === 1){
        if (nums[0] === target) return 0;
        return -1;
    }
    let l = 0;
    let r = nums.length - 1;
    let mid;
    while (r > l){  
        if (nums[l] === target) return l;
        if (nums[r] === target) return r;
        if (l === r - 1) return -1; 
        mid = Math.floor((r + l)/2)
        //normal case
        if (nums[l] < nums[r]){
            if (nums[mid] > target){
                r = mid;
            }
            if (nums[mid] < target){
                l = mid;
            }
        }
        //crazy
        if (nums[l] > nums[r]){
            if (nums[mid] > target){
                if (nums[r] > target){
                    if (nums[r] < nums[mid]) l = mid;
                    else r = mid;  
                }
                if (nums[r] < target){
                    r = mid;
                }
            }
            if (nums[mid] < target){
                console.log((nums[mid] < nums[l]));
                if ((nums[mid] < nums[l]) &&  (nums[r] < target)) {
                    r = mid;
                }
                else l = mid;
            }
        }
        if (nums[mid] === target)  return mid;
    }  
};