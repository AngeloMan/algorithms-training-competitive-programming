/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    let arr = [];
    let n1 = nums1.slice(0,m);
    let n2 = nums2.slice(0,n);
    let i = 0, j = 0;
    while ((i < m)||(j < n)){
        if ((i < m)&&(j < n)){
            if (n1[i] <= n2[j]){
                nums1[i + j] = n1[i];
                i++;
            }
            else{
                nums1[i + j] = n2[j];
                j++;
            }
        }
        else{
            if (i < m){
                nums1[i + j] = n1[i];
                i++;
            }
            else{
                nums1[i + j] = n2[j];
                j++;
            }
        }
    }
};
