#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int main(){

	int n, s;
	cin >> n >> s;
	vector <int> coins(n);
	for (int i = 0; i < n; i ++) cin >> coins[i];
	vector <int> dp(s + 1, 0);
	dp[0] = 1;
	sort(coins.begin(), coins.end());
	for (int i = 1; i <= s; i ++){
		for (int c = 0; c < n && i >= coins[c]; c++){
			dp[i] = (dp[i] + dp[i - coins[c]])%mod;
		}
	}
	cout << dp[s];

}
