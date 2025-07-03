class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return;
        int p = n - 2, l = n - 1;
        while (p >= 0 && nums[p] >= nums[p + 1]) p--;
        if (p != -1){
            while (nums[l] <= nums[p]) l--;
            swap(nums[p], nums[l]);
        }
        int lf = p + 1, r = n - 1;
        while (lf < r){
            swap(nums[lf], nums[r]);
            lf++, r--;
        }
    }
};