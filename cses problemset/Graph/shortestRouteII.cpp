#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

int main() {
	ll n, e, q, a, b, c;
	cin >> n >> e >> q;
	vector <vector<ll>> mt(n, vector<ll> (n, INF));
	for (int i = 0; i < n; i++){
		mt[i][i] = 0;
	}
	for (int i = 0 ; i < e;i ++){
		cin >> a >> b >> c;
		mt[a - 1][b - 1] = min(mt[a - 1][b - 1], c);
		mt[b - 1][a - 1] = mt[a - 1][b - 1];
	}
	for (int k = 0; k < n; k++){
		for (int i = 0; i < n; i++){
			for(int j= 0; j <n; j++){
				if (i != k && j != k){
					mt[i][j] = min(mt[i][j], mt[i][k] + mt[k][j]);
					mt[j][i] = mt[i][j];
				}
			}
		}
	}
	for (int i = 0; i < q; ++i){
		cin >> a >> b;
		ll r = mt[a - 1][b - 1];
		if (r == INF) r = -1;
		cout << r << "\n";
	}
}