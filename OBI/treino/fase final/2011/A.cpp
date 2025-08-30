#include <bits/stdc++.h>
#define ll long long

using namespace std;

int solve(){
	int n, d = 0, a, v;
	cin >> n;
	vector <int> l(n, 0);
	vector <int> c(n, 0);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n ; j ++){
			cin >> a;
			if (a > n * n) return 0;
			l[i] += a;
			c[j] += a;
			if (i == j) d += a;
		}
	}
	v = l[0];
	if (d != v) return 0;
	for (int i = 0; i < n; i++){
		if (l[i] != v || c[i] != v) return 0;
	}
	return v;
}

int main(){
	cout << solve() << endl;
}