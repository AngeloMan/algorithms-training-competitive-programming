class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int st, int k) {
        vector <int> pf(2 * 1e5 + 1, 0);
        int r = 0;
        for (auto fs: fruits) pf[fs[0]] += fs[1];
        for (int i = 1; i <= 2 * 1e5; i++) pf[i] += pf[i - 1];
        int i = st;
        while (st - i <= k){
            int x = (k - st + i)/2;
            int s = pf[min(x + st, int(2 * 1e5))];
            if (i > 0) s -= pf[i - 1];
            r = max(r, s);
            i--;
        }
        i = st;
        while (i - st <= k){
            int x = (k - i + st)/2;
            int s = pf[min(i, int(2 * 1e5))];
            if (st - x > 0) s -= pf[max(st - x - 1, 0)];
            r = max(r, s);
            i++;
        }
        return r;
    }
};