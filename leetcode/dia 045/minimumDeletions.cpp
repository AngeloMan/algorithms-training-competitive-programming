class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int s = 0, h = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] < nums[s])
                s = i;
            if (nums[i] > nums[h])
                h = i;
        }
        int l = min(s, h);
        int r = max(s, h);
        int a = l + 1 + nums.size() - r, b = nums.size() - l, c = r + 1;
        return min(min(a, b), c);
    }
};