/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */

var rotate = function(nums, k) {
    function mdc(a, b){
        let mod;
        while(b > 1){
            mod = a % b;
            a = b;
            b = mod;
        }
        if (b != 0) return b
        return a
    }
    while (k > nums.length){
        k -= nums.length;
    }
    if (nums.length === 1) return;
        function dif(v, k, max){
        if (v + k < max) return v + k;
        else return v + k - max; 
    }
    let p;
    let next;
    let crr;
    let a;
    for (i = 0; i < mdc(nums.length, k); i++){
        next = null;
        p = i;
        crr = nums[p];
        while (next != i){
            next = dif(p, k, nums.length);
            a = nums[next];
            nums[next] = crr;
            crr = a;
            p = next;
        }        
    }
};