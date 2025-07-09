#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int solve(int i, int j, vector <vector<ll>> mt, int m, int n){
	priority_queue <tuple <ll, ll, ll>> pq;
	ll t = mt[i][j];
	vector <vector <bool>> vis(m, vector<bool> (n, true));
	vector <vector <bool>> wk(m, vector<bool> (n, true));
	vis[i][j] = false;
	wk[i][j] = false;
	if (i > 0){
		pq.push({-mt[i - 1][j], i - 1, j});
		vis[i - 1][j] = false;
	}
	if (i + 1 < m){
		pq.push({-mt[i + 1][j], i + 1, j});
		vis[i + 1][j] = false;
	}
	if (j > 0){
		pq.push({-mt[i][j - 1], i, j - 1});
		vis[i][j - 1] = false;
	}
	if (j + 1 < n){
		pq.push({-mt[i][j + 1], i, j + 1});
		vis[i][j + 1] = false;
	}
	while (pq.size() && -get<0>(pq.top()) <= t){
		int v = - get<0>(pq.top());
		ll a = get<1>(pq.top()), b = get<2>(pq.top());
        pq.pop();
        if (wk[a][b]){
        	t += v;
        	wk[a][b] = false;
        	if (a > 0 && vis[a - 1][j]){
				pq.push({-mt[a - 1][b], a - 1, b});
				vis[a - 1][b] = false;
			}
	        if (a + 1 < m && vis[a + 1][b]){
	        	pq.push({-mt[a + 1][b], a + 1, b});
	        	vis[a + 1][b] = false;
	        }
	        if (b > 0 && vis[a][b - 1]){
	        	pq.push({-mt[a][b - 1], a, b - 1});
	        	vis[a][b - 1] = false;
	        }
	        if (b + 1 < n && vis[a][b + 1]){
	        	pq.push({-mt[a][b + 1], a, b + 1});
	        	vis[a][b + 1] = false;
	        }
        }
		
		
	}
	return t;
}

int main() {
    int m, n;
    cin >> m >> n;
	vector <vector<ll>> mt(m, vector<ll> (n));
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> mt[i][j];
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (j < n - 1) cout << solve(i, j, mt, m ,n) << " ";
			else cout << solve(i, j, mt, m ,n);
		}
		cout << "\n";
	}
}