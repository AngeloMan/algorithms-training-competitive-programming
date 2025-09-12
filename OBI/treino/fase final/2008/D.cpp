#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, a, b, c;
	cin >> n >> m;
	vector <vector <pair<int, int>>> gf(n, vector <pair<int, int>> {});
	for (int i = 0; i < m; i++){
		cin >> a >> b >> c;
		gf[a].push_back({b, c});
		gf[b].push_back({a, c});
	}
	int t = 1, r = 0;
	vector <bool> ok(n, true);
	ok[0] = false;
	priority_queue <pair<int, int>> pq;
	for (auto p: gf[0]) pq.push({-p.second, p.first});
	while (t < n && !pq.empty()){
		a = pq.top().second, c = - pq.top().first;
		// cout << a << endl;
		pq.pop();
		if (ok[a]){
			ok[a] = false;
			r += c;
			for (auto p: gf[a]){
				if (ok[p.first]) pq.push({-p.second, p.first});
			}
		}
	}
	cout << r << endl;
}