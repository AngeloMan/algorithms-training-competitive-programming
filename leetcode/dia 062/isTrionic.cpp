class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int c = 0, d = 0;
        bool bc = false, bd = false;
        for (int i = 1; i < nums.size(); i++){
            if (!bc && nums[i] > nums[i - 1]){
                c++;
                bc = true;
                bd = false;
            }
            if (!bd && nums[i] < nums[i - 1]){
                if (c == 0 || c == 2) return false;
                d++;
                bd = true;
                bc = false;
            } 
            if (nums[i] == nums[i - 1]) return false;
            
        }
        if (c == 2 && d == 1)return true;
        return false;
    }
};