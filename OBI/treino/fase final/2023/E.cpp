#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m = 0;
	cin >> n;
	vector <int> x(n);
	vector <int> y(n);
	for (int i =0; i < n;i++) cin >> x[i];
	for (int i =0; i < n;i++) cin >> y[i];
	vector <int> g1;
	vector <int> g2;
	vector <int> g(n, 0);
 	vector <vector <int>> d;
	for (int i = 0; i < n; i++){
		for (int j =i + 1; j < n; j++) d.push_back({-(abs(x[i] - x[j]) + abs(y[i] - y[j])),i, j});
	}
	sort(d.begin(), d.end());
	// for (auto v: d) cout << -v[0] << " " << v[1] + 1 << " " << v[2] + 1 << endl; 
	for (int i = 0; i < d.size(); i++){
		int dt = d[i][0], a = d[i][1], b = d[i][2];
		if (!g[a] && !g[b]){
			int da1 = 0, da2 = 0, db1 = 0, db2 = 0;
			for (int k: g1){
				da1 = max(da1, abs(x[a] - x[k]) + abs(y[a] - y[k]));
				db1 = max(db1, abs(x[b] - x[k]) + abs(y[b] - y[k]));
			}
			for (int k: g2){
				da2 = max(da2, abs(x[a] - x[k]) + abs(y[a] - y[k]));
				db2 = max(db2, abs(x[b] - x[k]) + abs(y[b] - y[k]));
			}
			if (max(da1, db2) < max(da2, db1)){
				g[a] = 1; g[b] = 2;
				m = max(da1, db2);
				g1.push_back(a);
				g2.push_back(b);
			}
			else{
				g[a] = 2; g[b] = 1;
				g2.push_back(a);
				g1.push_back(b);
			}
		}
		else if (!g[a]){
			if (g[b] == 1){
				g[a] = 2;
				g2.push_back(a);
			}
			if (g[b] == 2){
				g[a] = 1;
				g2.push_back(a);
			}
		}
		else if (!g[b]){
			if (g[a] == 1){
				g[b] = 2;
				g2.push_back(b);
			}
			if (g[a] == 2){
				g[b] = 1;
				g2.push_back(b);
			}
		}
	}
	//cout << endl;
	if (g1.size() == 1) g2.push_back(g1[0]);
	else{
		for (int i = 0; i < g1.size(); i++){
			int k = 1e9;
			for (int j = i + 1; j < g1.size(); j++){
				k = min(k, abs(x[g1[i]] - x[g1[j]]) + abs(y[g1[i]] - y[g1[j]]));
			}
			if (k != 1e9)m = max(m, k);	
		}
	}
	if (g2.size() == 1) g1.push_back(g2[0]);
	else{
		for (int i = 0; i < g2.size(); i++){
			int k = 1e9;
			for (int j = i + 1; j < g2.size(); j++){
				k = min(k, abs(x[g2[i]] - x[g2[j]]) + abs(y[g2[i]] - y[g2[j]]));
			}
			if (k != 1e9) m = max(m, k);	
		}
	}
	
	// for (int i = 0; i < n; i++) cout << i + 1 << " " << g[i] << endl;
	cout << m << endl;
}