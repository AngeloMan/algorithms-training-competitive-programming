var permute = function(nums) {
    let result = [];
    function rec(arr, len){
        if (len === nums.length){
            result.push(arr);
            return;
        }
        for (let i = 0; i < nums.length; i++){
            if (!arr.includes(nums[i])) rec([...arr, nums[i]], len + 1);
        }
    }
    rec([], 0);
    return result;
};