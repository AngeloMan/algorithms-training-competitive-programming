class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int m = - 1, r = 0;
        for (int w: weight){
            if (m == -1 || w >= m) m = w;
            else{
                r++;
                m = -1;
            }
        }
        return r;
    }
};