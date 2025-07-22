class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector <vector<bool>> vis(m, vector <bool> (n, true));
        vector <vector<int>> dr = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};
        int r = 0, a, b, u, v;
        long long t;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; ++j){
                if (vis[i][j] && grid[i][j] != 0){

                    t = grid[i][j];
                    queue <pair<int, int>> q;
                    vis[i][j] = false;
                    q.push({i, j});
                    while (!q.empty()){
                        a = q.front().first, b = q.front().second;
                        q.pop();
                        for (auto d: dr){
                            u = a + d[0], v = b + d[1];
                            if (u >= 0 && u < m && v >= 0 && v < n && grid[u][v] != 0 && vis[u][v]){
                                vis[u][v] = false;
                                t += grid[u][v];
                                q.push({u,v});
                            }
                        }
                    }
                    if (t % k == 0) r++;
                }
            }
        }
        return r;
    }
};