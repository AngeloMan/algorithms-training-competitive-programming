class Solution {
public:

    int solve(vector <vector<int>> & dp, string &word1, string &word2, int i, int j){
            if (i < 0 || j < 0) return 1e6;
            if (dp[i][j] != -1) return dp[i][j];
            int c = 0;
            if (word1[j] != word2[i]) c++;
            dp[i][j] = min({solve(dp, word1, word2, i - 1, j) + 1, solve(dp, word1, word2, i, j - 1) + 1, solve(dp, word1, word2, i - 1, j - 1) + c});
            return dp[i][j];
    }

    int minDistance(string word1, string word2) {
        word1 = " " + word1; 
        word2 = " " + word2; 
        int m = word2.size(), n = word1.size();
        vector <vector<int>> dp(m, vector <int> (n, -1));
        dp[0][0] = 0;
        
        return solve(dp, word1, word2, m - 1, n - 1);
    }
};