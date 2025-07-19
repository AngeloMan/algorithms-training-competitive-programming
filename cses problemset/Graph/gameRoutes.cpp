#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll mod = 1e9 + 7;

void dfs(int i, vector <vector<int>>& gf, vector <int>& st, vector <int>& ts){
	st[i] = 1;
	for (auto nb: gf[i]){
		if (st[nb] != 2) dfs(nb, gf, st, ts);
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
		
	for (int i = 0; i < m;i++){
		cin >> a >> b;
		gf[a - 1].push_back(b - 1);
	}
	dfs(0, gf, st, ts);
	reverse(ts.begin(), ts.end());
	vector <int> total(n, 0);
	total[0] = 1;
	for (int i: ts){
		// cout << i << " "; 
		for (auto nb: gf[i]){
			total[nb] += total[i];
			total[nb] %= mod;
		}
	}
	cout << total[n - 1];
}