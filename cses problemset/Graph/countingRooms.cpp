#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
	int m, n;
	cin >> m >> n;
	vector <string> gd(m);
	vector <bool> vis(n * m, false);
	
	for (int i = 0; i < m; i++) cin >> gd[i];
	//for (string s: gd) cout << s << endl;
	int t = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (!vis[(i * n) + j] && gd[i][j] != '#'){

				t++;
				vis[(i * n) + j] = true;
				deque <pair<int, int>> q = {{i, j}};
				while(q.size()){
					int u = q[0].first, v = q[0].second;
					q.pop_front();
					if (u > 0 && gd[u - 1][v] != '#' && !vis[((u - 1) * n) + v]){
						vis[((u - 1) * n) + v] = true;
						q.push_back({u - 1, v});
					}
					if (u < m - 1 && gd[u + 1][v] != '#' && !vis[((u + 1) * n) + v]){
						vis[((u + 1) * n) + v] = true;
						q.push_back({u + 1, v});
					}
					if (v > 0 && gd[u][v - 1] != '#' && !vis[(u * n) + v - 1]){
						vis[(u * n) + v - 1] = true;
						q.push_back({u, v - 1});
					}
					if (v < n - 1 && gd[u][v + 1] != '#' && !vis[(u * n) + v + 1]){
						vis[(u * n) + v + 1] = true;
						q.push_back({u, v + 1});
					}

				}
				
			}
		}
	}
	cout << t;   
}	