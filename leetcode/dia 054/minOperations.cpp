class Solution {
public:
    int minOperations(vector<int>& nums) {
            int t = 0, l = -1;
            for (int c : nums){
                if (l != -1 && c <= l){
                    t += (l - c) + 1;
                    l += 1;
                }
                else l = c;
            }
            return t;
    }
};