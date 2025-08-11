class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int u = fruits.size();
        vector <bool> ck(fruits.size(), true);
        for (int f: fruits){
            bool keep = true;
            for (int i = 0; i < baskets.size() && keep; i++){
                if (ck[i] && baskets[i] >= f){
                    ck[i] = false;
                    u--;
                    keep = false;
                }
            }
        }
        return u;
    }
};