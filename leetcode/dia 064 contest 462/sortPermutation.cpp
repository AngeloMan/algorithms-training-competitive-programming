class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int r = (1 << 17) - 1;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != i) r &= nums[i];
        }
        if (r == (1 << 17) - 1) return 0;
        return r;
    }
};