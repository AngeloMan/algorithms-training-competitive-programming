var minSum = function(nums1, nums2) {
    function first(arr){
        let zeros = 0, sum = 0;
        for (i = 0; i < arr.length; i++){
            if (arr[i] != 0) sum += arr[i];
            else zeros++;
        }
        return [sum, zeros];
    }
    const a = first(nums1), b = first(nums2);
    if (a[1] === 0 || b[1] === 0){
        if (a[1] != 0){
            if (a[0] + a[1] <= b[0]) return b[0]
        }
        if (b[1] != 0){
            if (b[0] + b[1] <= a[0]) return a[0]
        }
        if (a[0] === b[0] && a[1] === 0 && b[1] === 0) return a[0];
        return -1; 
    }
    if (b[0] + b[1] >= a[0] + a[1]) return b[0] + b[1];
    if (a[0] + a[1] >= b[0] + b[1]) return a[0] + a[1];
    
};