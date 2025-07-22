#include <bits/stdc++.h>

using namespace std;

int dfs(int p, vector <vector<int>> & dag, vector <int>& mx){
	if (mx[p] != -1) return mx[p];
	mx[p] = 0;
	for (int nb: dag[p]){
		mx[p] = max(mx[p], dfs(nb, dag, mx) + 1);
	}
	return mx[p];
}

int main(){
	int s, t, p, a, b;
	cin >> s >> t >> p;
	vector <int> al(s);
	for (int i  = 0; i < s; ++i) cin >> al[i];
	vector <vector<int>> dag(s, vector <int> {});
	for (int i = 0 ; i < t; i++){
		cin >> a >> b;
		a--; b--;
		if (al[b] > al[a]) swap(a, b);
		if (al[b] != al[a])dag[a].push_back(b);
	}
	vector <int> mx(s, -1);
	cout << dfs(p - 1, dag, mx) << "\n";
	
}