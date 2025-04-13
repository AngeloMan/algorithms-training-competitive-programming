/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    function getArr(m, t){
        let leni = m.length;
        let lenj = m[0].length;
        if (leni === 1 ) {
            if ((m[0][0] <= t) && (m[0][lenj - 1] >= t)) return m[0];
            return false
        }
        let l = 0;
        let r = leni - 1;
        let mid;
        if ((m[0][0] > t) || (m[leni - 1][lenj - 1] < t)) return false;
        while (l != r){
            //let check = true
            mid = Math.floor((l + r) / 2);
            if ((m[mid][0] <= t) && (m[mid][lenj - 1] >= t)) return m[mid];
            if (m[mid][lenj - 1] < t){
                l = mid + 1;
                if (m[l][0] > t) return false;
            }
            if (m[mid][0] > t){
                r = mid - 1;
                if (m[r][lenj - 1] < t) return false;
            }
            if (r === l){
                if ((m[l][0] <= t) && (m[l][lenj - 1] >= t)) return m[l];
                else return false; 
            }
        }
    }

    let arr = getArr(matrix, target);
    if (arr === false) return false;
    function check(nums, target) {
        let l = 0;
        let r = nums.length - 1;
        let mid;
        let c = 0;
        while ((l != r)&&(c < 10)){
            c ++
            mid = Math.floor((r + l)/2)
            if (nums[mid] > target){
                r = mid - 1
                if (nums[r] < target) return false;
            }
            else if (nums[mid] < target){
                l = mid + 1
                if (nums[l] > target) return false;
            }
            else{
                return true;
            }
            if (l === r){
                if (target === nums[r]) return true;
                return false;
            }
        }
        if (nums.length === 1){
            if (nums[0] === target) return true;
            return false;
        }
    }
    return check(arr, target);
    
};