class Solution {
public:
    
    bool dfs(int a, int b, vector<vector<char>>& grid, int m, int n, vector <vector<bool>>& vis, int pi, int pj){
        if (vis[a][b] == true) return false; 
        //cout << a << " "<< b << endl;
        vis[a][b] = true;
        if (a > 0 && (a - 1 != pi || b != pj) && grid[a - 1][b] == grid[a][b]){
            if (!dfs(a - 1, b, grid, m, n, vis, a, b)) return false;
        }
        if (a + 1 < m && (a + 1 != pi || b != pj) && grid[a + 1][b] == grid[a][b]){
            if (!dfs(a + 1, b, grid, m, n, vis, a, b)) return false;
        }
        if (b > 0 && (a != pi || b - 1!= pj) && grid[a][b - 1] == grid[a][b]){
            if (!dfs(a, b - 1, grid, m, n, vis, a, b)) return false;
        }
        if (b + 1 < n && (a != pi || b + 1 != pj) && grid[a][b + 1] == grid[a][b]){
            if (!dfs(a, b + 1, grid, m, n, vis, a, b)) return false;
        }
        return true;
    }

    bool containsCycle(vector<vector<char>>& grid) {
    
        int m = grid.size(), n = grid[0].size();
        vector <vector<bool>> vis(m, vector<bool> (n, false));
        for (int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if (!vis[i][j]){
                    if (!dfs(i, j, grid, m, n, vis, i, j)) return true;  
                    //cout << endl;                  
                }
            }
        }
        return false;
    }
};