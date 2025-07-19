#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solve(vector<vector<int>> &dp, string &a, string &b,int i, int j){
	if (i < 0 || j < 0) return 1e4;
	if (dp[i][j] != -1) return dp[i][j];
	int c = 0;
	if (a[i] != b[j]) c++;
	dp[i][j] = min(solve(dp, a, b, i - 1, j) + 1, min(solve(dp, a, b, i, j - 1) + 1, solve(dp, a, b, i - 1, j - 1) + c));
	return dp[i][j];
}

int main() 
{
	string a, b;
	cin >> a >> b;
	a = " " + a;
	b = " " + b;
	int m = a.size(), n = b.size();      
    vector <vector<int>> dp(m, vector<int> (n, -1));
    dp[0][0] = 0;
    
    cout << solve(dp, a, b, m - 1, n - 1); 
    
    return 0;
}