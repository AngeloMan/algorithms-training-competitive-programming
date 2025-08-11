class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for (int i = 0; i < k/2; i++){
            for (int j = y; j < k + y; j++){

                swap(grid[i + x][j], grid[x + k - 1 - i][j]);
                
            }
        }
        return grid;
    }
};