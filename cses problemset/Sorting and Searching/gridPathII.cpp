// fail

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define umap unordered_map

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll solve(vector <vector<ll>> &mt ,int i, int j, int &n){
	if (i == n || j == n) return 0;
	if (mt[i][j] != -1) return mt[i][j];
	mt[i][j] = (solve(mt, i + 1, j, n) + solve(mt, i, j + 1, n))%MOD;
	return mt[i][j];
}

int main() {
    int n, m, a, b;
    cin >> n >> m;
    umap <>;
    for (int i = 0; i < m; i++){
    	cin >> a >> b;
    	mt[a - 1][b - 1] = 0;
    }
    mt[n - 1][n - 1] = 1;
    cout << solve(mt, 0, 0, n);
}