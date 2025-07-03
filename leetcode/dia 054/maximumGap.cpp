class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int h = INT_MIN, l = INT_MAX, n = nums.size();
        if (n < 2) return 0;
        for (int x: nums){
            if (x > h) h = x;
            if (x < l) l = x; 
        }
        if (h == l) return 0;
        double d = double(h - l)/double(n - 1);
        int r = (h - l)/(n - 1), i, prev = l;
        vector <vector<int>> inter(n - 1, {-1, -1});
        for (int x: nums){
            i = (x - l)/d;
            if (i == n - 1) i--;
            if (inter[i][0] > x || inter[i][0] == -1) inter[i][0] = x;
            if (inter[i][1] < x) inter[i][1] = x;
        }
        for (int i = 0; i < n - 1; i++){
            if (inter[i][0] != -1){
                r = max(r, inter[i][0] - prev);
                prev = inter[i][1];
            }         
        }
        return r;
    }
};