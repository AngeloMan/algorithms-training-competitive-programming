class Solution {
public:
    bool check(int i, int j, int n){
        return (i >= 0 && j >= 0 && i < n && j < n);
    }

    int swimInWater(vector<vector<int>>& gd) {
        int n = gd.size(), inf = 1e9;
        vector <vector<int>> mi(n, vector<int> (n, inf));
        mi[0][0] = gd[0][0];
        priority_queue <vector <int>> pq;
        pq.push({-gd[0][0], 0, 0});
        vector <vector<int>> dr = {{1,0},{0,1},{-1,0},{0,-1}};
        while (!pq.empty()){
            int c =  - pq.top()[0], a = pq.top()[1], b = pq.top()[2];
            pq.pop();
            if (a == n - 1 && b == n - 1) return c;
            if (c == mi[a][b]){
                for (auto d: dr){
                    int u = a + d[0], v = b + d[1];
                    if (check(u, v, n) && max(mi[a][b], gd[u][v]) < mi[u][v]){
                        mi[u][v] = max(mi[a][b], gd[u][v]);
                        pq.push({-mi[u][v], u, v});
                    }
                }
            }
        }
        return -1;
    }
};