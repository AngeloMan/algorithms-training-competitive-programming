class Solution {
public:

    int islandPerimeter(vector<vector<int>>& grid) {
        int t= 0, m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++){
            for (int j = 0 ; j < n; ++j){
                if (grid[i][j]){
                    if (i == 0 || !grid[i - 1][j]) t++;
                    if (j == 0 || !grid[i][j - 1]) t++;
                    if (i ==  m - 1 || !grid[i + 1][j]) t++;
                    if (j == n - 1 || !grid[i][j + 1]) t++;
                }
            }
        }
        return t;
    }
};