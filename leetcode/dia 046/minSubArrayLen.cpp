class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, m = 1 + (1e5), total = 0;
        while (r < nums.size()){
            total += nums[r];
            if (total >= target){
                if (r - l + 1 < m) m = r - l + 1;
                while (total - nums[l] >= target){
                    total -= nums[l];
                    l++;
                    if (r - l + 1 < m && total >= target) m = r - l + 1;
                }
            }
            r++;
        }
        if (m != 1 + (1e5)) return m;
        return 0;
    }
};