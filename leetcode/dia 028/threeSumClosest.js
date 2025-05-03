var threeSumClosest = function(nums, target) {
    let checked = [], csum, cres = Infinity;
    nums.sort((a,b) => a-b);
    for (i = 0; i < nums.length - 2; i++){
        let l = i + 1, r = nums.length - 1;
        if (!checked.includes(nums[i])){
            while (l != r){
                csum = nums[i] + nums[l] + nums[r];
                if (Math.abs(target - csum) === Math.abs(target - cres)) cres = Math.max(cres, csum);
                else if (Math.abs(target - csum) < Math.abs(target - cres)) cres = csum; 
                if (csum === target) return target;
                else if (csum > target) r--;
                else l++;
            }
        }
        checked.push(nums[i]);
    }
    return cres;
};