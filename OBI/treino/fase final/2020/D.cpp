#include <bits/stdc++.h>

using namespace std;

bool ok(int i, int j, int m, int n){
	return ((i >= 0 && i < m) && (j >= 0 && j < n));
}

int main(){
	int m, n, p, a, b, r = 0;
	cin >> m >> n;
	vector <vector <int>> mt(m, vector <int> (n, 0));
	cin >> p;
	vector <vector<int>> dr = {{1,0},{0,1},{-1,0},{0,-1}};
	for (int i = 0; i < p; i++){
		cin >> a >> b;
		a--;b--;
		mt[a][b] = 1;
		for (auto d: dr){
			int u = a + d[0], v = b + d[1];
			// cout << u << " " << v << " " <<   ok(u, v, m, n) << endl;
			if (ok(u, v, m, n) && !mt[u][v]) mt[u][v] = 2;
		}
	}
	// cout << endl;
	priority_queue <vector <int>> pq;
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){	
			if (mt[i][j] == 2){
				// cout << i + 1 << " " << j + 1 << endl; 
				int t = 0;
				for (auto d: dr){
					int u = i + d[0], v = j + d[1];
					if (ok(u, v, m, n) && mt[u][v] == 2) t++;
				}
				pq.push({-t, i, j});
			}
		}
	}
	
	while (!pq.empty()){
		a = pq.top()[1], b = pq.top()[2];
		// cout << a + 1 << " " << b + 1 << endl;
		pq.pop();
		bool y = true;
		for (auto d: dr){
			int u = a + d[0], v = b + d[1];
			if (ok(u, v, m, n) && mt[u][v] == 3) y = false;
		}
		if (y) {
			r++;
			mt[a][b] = 3;
		}
	}
	cout << r << "\n";
}