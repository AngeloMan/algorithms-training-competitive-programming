class NumArray {
public:
    vector<int> ps;
    NumArray(vector<int>& nums) {
        ps.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
            ps.push_back(nums[i] + ps[i - 1]);
    }
    
    int sumRange(int left, int right) {
        if (left == 0)
            return ps[right];
        return ps[right] - ps[left - 1];        
    }
};
