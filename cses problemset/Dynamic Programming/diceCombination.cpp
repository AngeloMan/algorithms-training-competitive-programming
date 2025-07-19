#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll inf = 1e12;
ll mod = 1e9 + 7;

int main(){
	int n;
	cin >> n;
	vector <ll> dp(n + 1, 0);
	dp[0] = 1;
	for (int i = 0; i <=n;++i){
		for (int c = 1; c <= 6 && c + i <= n; c ++){
			dp[c + i] += dp[i];
			dp[c + i] %= mod;
		}
	}
	cout << dp[n];
}