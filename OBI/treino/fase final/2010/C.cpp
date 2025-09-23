#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll m = 1e9 + 7;

ll rec(ll i, ll & n, ll & l, vector <ll> & dp, string & w){
	if (dp[i] != -1) return dp[i];
	ll a = int(w[i]) - 48;
	dp[i] = 0;
	if (a == 0 || a > l) return 0;
	ll r = i;
	while (a < l && r < n){
		dp[i] += rec(r + 1, n, l, dp, w);
		dp[i] %= m;
		a *= 10;
		r++;
		if (r < n) a+= int(w[r])-48;
	}
	return dp[i];
}

int main(){
	ll l;
	string w;
	cin >> l >> w;
	ll n = w.size();
	vector <ll> dp (n + 1, -1);
	dp[n]= 1;
	cout << rec(0, n, l, dp, w);
}



