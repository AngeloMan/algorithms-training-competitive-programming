#include <bits/stdc++.h>

using namespace std;

int k, v, m, n;
void dfs(int i, int j, vector <vector <bool>> & vis, vector <string> & mt){
	if (vis[i][j] || mt[i][j] == '#') return;
	vis[i][j] = true;
	if (mt[i][j] == 'k')k++;
	if (mt[i][j] == 'v')v++;
	if (i - 1 > 0) dfs(i - 1, j, vis, mt);
	if (j - 1 > 0) dfs(i, j - 1, vis, mt);
	if (i + 1 < m) dfs(i + 1, j, vis, mt);
	if (j + 1 < n) dfs(i, j + 1, vis, mt);
}

int main(){
	int o = 0, l = 0;
	cin >>  m >> n;
	vector <string> mt(m);
	vector <vector<bool>> vis(m, vector <bool> (n, false));
	for (int i = 0; i < m; i++) cin >> mt[i];
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			k = 0; v = 0;
			dfs(i, j, vis, mt);
			if (k > v) o += k;
			else l += v;					
		}
	}
	cout << o << " " << l << "\n";
}