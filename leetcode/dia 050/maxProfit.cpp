class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0, l = INT_MAX;
        for (int n : prices){
            if (n - l > max) max = n - l;
            if (n < l) l = n;
        }
        return max;
    }
};