class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        bool last = true;
        for (int i = d.size() - 1; last && i >= 0; i--){
            d[i]++;
            if (d[i] < 10) last = false;
            else d[i] %= 10;         
        }   
        if (last) d.insert(d.begin(), 1);
        return d;
    }
};