#include <bits/stdc++.h>

using namespace std;

int dist(string a, string b){
	int m = a.size(), n = b.size();
	vector <vector<int>> dp (m + 1, vector <int> (n + 1, 1e9));
	// dp[0][0] = 0;
	// cout << a <<  " " << b << endl; 
	for (int i = 0; i < m; i++) dp[i][0] = i;
	for (int i = 0; i < n; i++) dp[0][i] = i;
	// cout << dp[0][0] << endl;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			dp[i][j] = min(dp[i - 1][j - 1] + int(a[i - 1] != b[j - 1]) , min(dp[i- 1][j], dp[i][j - 1]) + 1);
			// cout << dp[i][j] << " ";
		}
		// cout << endl;
	}
	return dp[m][n];
}

int main(){
	int n, m;
	cin >> n >> m;
	vector <string> dict(n);
	string a;
	
	for (int i = 0; i < n; i++) cin >> dict[i];
	for (int i = 0; i < m; i++){
		cin >> a;
		string r = "";
		for (string b: dict){
			if (dist(a, b) <= 2) r += b + " ";
		}
		cout << r + "\n";
	}
}