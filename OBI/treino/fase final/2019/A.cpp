#include <bits/stdc++.h>

using namespace std;

long long solve(){
	int n ,t;
	cin >> n >> t;
	if (t == 0) return n;
	if (t == 1) return n * (n - 1);
	long long r = 0;
	for (int i = 1; i < n; i++) r += (i - 1) * (n - i);
	return r;
}

int main(){
	cout << solve();
}