class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int last = 0, h = 0, current;
        for (int n : nums){
            if (n == 1){
                if (last == 0){
                    current = 1;
                    last = 1;
                }
                else current++;
                if (current > h) h = current;
            }
            else last = 0;
        }
        return h;
    }
};