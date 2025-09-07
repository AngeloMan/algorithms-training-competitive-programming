#include <bits/stdc++.h>

using namespace std;
long long  m = 1e9 + 7;

void dfs(int a, vector <vector <int>> & gf, vector <bool> & vis){
	vis[a] = false;
	for (int b: gf[a]){
		if (vis[b]) dfs(b, gf, vis);
	}
}

int main(){
	int n, m, a, b, t = 0;
	cin >> n >> m;
	vector <vector <int>> gf(n, vector <int> {});
	for (int i =0 ; i< m;i++){
		cin >> a >> b;
		a--;b--;
		gf[a].push_back(b);
		gf[b].push_back(a);
	}
	vector <bool> vis(n, true);
	for (int i = 0; i < n;i++){
		if (vis[i]){
			t++;
			vis[i] = false;
			dfs(i, gf, vis);
		}
	}
	cout << t << endl;
}