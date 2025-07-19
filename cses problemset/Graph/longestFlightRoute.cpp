#include <bits/stdc++.h>

using namespace std;

void dfs(int i, vector <vector<int>>& gf, vector <int>& st, vector <int>& ts, bool& stop){
	if (stop) return;
	st[i] = 1;
	for (auto nb: gf[i]){
		if (st[nb] == 1){
			stop = true;
			return;
		}
		if (st[nb] != 2) dfs(nb, gf, st, ts, stop);
		if (stop) return;
	}
	st[i] = 2;
	ts.push_back(i);
}

int main(){
	int n, m, a, b;
	cin >> n >> m;
	vector <vector<int>> gf(n, vector <int>{});
	vector <int> st(n, 0);
	vector <int> ts;
	bool stop = false;
	
	
	for (int i = 0; i < m;i++){
		cin >> a >> b;
		gf[a - 1].push_back(b - 1);
	}
	
	dfs(0, gf, st, ts, stop);
	if (stop){
		cout << "IMPOSSIBLE";
		return 0;
	}
	reverse(ts.begin(), ts.end());
	// for (auto i: ts) cout << i + 1 << " "; 
	vector <vector<int>> w(n, {-1, -1});
	w[0] = {1, 0};
	for (auto i: ts){
		for (int nb: gf[i]){
			a = w[nb][0], b = w[nb][1];
			if (a == -1 || a < w[i][0] + 1){
				w[nb][0] = w[i][0] + 1;
				w[nb][1] = i;
			}
		}
	}
	if (w[n- 1][0] == -1){
		cout << "IMPOSSIBLE";
		return 0;
	}
	cout << w[n - 1][0] << endl;
	int k = n - 1;
	vector <int> r = {n};
	while (k != 0){
		r.push_back(w[k][1] + 1);
		k = w[k][1];
	} 
	string final = "";
	for (int i = r.size() - 1; i >= 0; i--){
		final += to_string(r[i]) + " ";
	}
	cout << final;
}