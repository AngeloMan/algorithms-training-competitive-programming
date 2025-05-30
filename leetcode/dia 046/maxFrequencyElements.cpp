class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int max = 0, total = 0;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if (mp[nums[i]] == max){
                total++; 
            }
            if (mp[nums[i]] > max){
                max = mp[nums[i]];
                total = 1;
            }
        }
        return total * max;
    }
};