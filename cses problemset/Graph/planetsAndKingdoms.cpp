#include <bits/stdc++.h>

using namespace std;

void dfs(int i, vector <int>& vis, vector<vector<int>>& gf, vector<int> & st, int o, vector <int>& r){
	for (auto nb: gf[i]){
		if (!vis[nb] || (o != -1 && vis[nb] == 1)){
			vis[nb] ++;
			dfs(nb, vis, gf, st, o, r);
		}
	}
	if (o == -1) st.push_back(i);
	else r[i] = o;
}

int main(){
	int n, m, a, b;
	cin >>n >> m;
	vector<vector<int>> gf(n, vector <int> {});
	vector<vector<int>> gfi(n, vector <int> {});
	for (int i = 0 ; i < m; i++){
		cin >> a >> b;
		gf[a - 1].push_back(b - 1);
		gfi[b - 1].push_back(a - 1);
	}
	vector <int> r(n, -1);
	vector <int> vis(n, 0);
	vector <int> st;
	for (int i = 0 ; i < n; i++){
		if (!vis[i]){
			vis[i] ++;
			dfs(i , vis, gf, st, -1, r);
		}
	}
	int o = 0;
	while (!st.empty()){
		a = st[st.size() - 1];
		st.pop_back();
		if (vis[a] == 1){
			o++;
			vis[a]++;
			dfs(a, vis, gfi, st, o, r);
		}
	}
	cout << o << "\n";
	for (int i: r) cout << i << " ";
}