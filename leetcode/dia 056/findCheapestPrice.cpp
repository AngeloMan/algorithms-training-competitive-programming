class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        int inf = 1000001;
        vector <int> dt(n, inf);
        dt[src] = 0;
        for (int z = 0; z <= k;z++){
            vector <int> cdt = dt;
            for (auto f: flights){
                int a = f[0], b = f[1], c = f[2];
                if (dt[a] != inf) cdt[b] = min(cdt[b], dt[a] + c);
            }
            dt = cdt;
        }
        if (dt[dst] == inf) return -1;
        return dt[dst];
    }
};