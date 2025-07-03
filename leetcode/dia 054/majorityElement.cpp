class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c, t = 0;
        for (int n: nums){
            if (t == 0) c = n;
            if (n == c) t++;
            else t--;
        }
        return c; 
    }
};