class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int inf = 1000001, r = 0;
        vector <int> d(n, inf);
        d[k - 1] = 0;
        for (int i = 0;i< n- 1; i++){
            for(auto f: times){
                d[f[1] - 1] = min(d[f[1] - 1], d[f[0] - 1] + f[2]);
            }
        }
        for (int i = 0; i < n; i++) r = max(r, d[i]);
        if (r == inf) return -1;
        else return r;
    }
};