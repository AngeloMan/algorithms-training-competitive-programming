#include <bits/stdc++.h>

using namespace std;

bool possible = true;

void solve(int i, vector <vector<int>>& gf, vector <int> & st, vector<int> & r){
	st[i] = 1;
	for (int nb: gf[i]){
		if (st[nb] == 1){
			possible = false;
			return;
		}
		if (possible && st[nb] != 2) solve(nb, gf, st, r);
	}
	r.push_back(i + 1);
	st[i] = 2;
}

int main(){
	int n, m, a, b;
	cin >> n >> m;
	vector <vector<int>> gf(n, vector <int>{});
	vector <int> st(n, 0);
	vector <int> r;
	for (int i = 0; i< m; i++){
		cin >> a >> b;
		gf[a - 1].push_back(b - 1);
	}
	for (int i = 0 ; i < n; i ++){
		if (st[i] == 0){
			vector <int> crr;
			solve(i, gf, st, r);
		}
		if (!possible) {
			cout << "IMPOSSIBLE";
			return 0;
		}
	}
	string s = "";
	for (int i = n - 1; i >= 0; i--){
		s += to_string(r[i]) + " ";
	}
	cout << s;
}