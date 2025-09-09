#include <bits/stdc++.h>

using namespace std;

void dfs(int i, vector <vector <int>> & gf, vector <int> & vis, vector <int> & r){
	vis[i] = false;
	for (int a: gf[i]){
		if (vis[a]){
			dfs(a, gf, vis, r);
			r[i] += r[a];
		}
	}
}

int main(){
	int n, a, b;
	cin >> n;
	vector <vector <int>> gf(n, vector <int> {});
	for (int i = 0; i < n - 1; i++){
		cin >> a >> b;
		a--; b--;
		gf[a].push_back(b);
		gf[b].push_back(a);
	}
	vector <int> r(n, 1);
	vector <int> vis(n, true);
	dfs(0, gf, vis, r);
	// for (int i: r) cout << i << " ";
	int c = 0, mn = 1e9, mx, mv;
	while (true){
		vis[c] = true;
		mx = -1, mv = -1;
		for (int nb: gf[c]){
			if (r[nb] > mx && !vis[nb]){
				mx = r[nb];
				mv = nb;
			}
		}
		mn = min(mn, max(2 * mx - n, n - 2 * mx));
		if (mv == -1) break;
		c = mv;
	}
	cout << mn << endl;
}