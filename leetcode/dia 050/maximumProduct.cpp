class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int f = INT_MIN, s = INT_MIN, t = INT_MIN;
        int fl = INT_MAX, sl = INT_MAX;
        for (int n: nums){
            if (f < n) t = s, s = f, f = n;
            else if (s < n) t = s, s = n;
            else if (t < n) t = n;
            if (fl > n) sl = fl, fl = n;
            else if (sl > n) sl = n;
        }
        return max(fl * sl * f, f * s * t);    
    }
};