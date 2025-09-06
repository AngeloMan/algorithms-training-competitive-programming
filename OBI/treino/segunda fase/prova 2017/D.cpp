#include <bits/stdc++.h>

using namespace std;
int inf = 1e9;

int dijk(int n, vector <vector <pair<int ,int>>>& gf){
	priority_queue <vector <int>> pq;
	pq.push({0, 0});
	vector <int> dist(n, inf);
	dist[0] = 0;
	while (!pq.empty()){
		int d = -pq.top()[0], c = pq.top()[1];
		pq.pop();
		if (c == n - 1) return d;
		if (d <= dist[c]){
			for (auto e: gf[c]){
				int u = e.first, v = e.second;
				if (dist[u] > dist[c] + v){
					dist[u] = dist[c] + v;
					pq.push({-dist[u], u});
					
				}
			}
		}
	}
	
	return dist[n - 1];
}

int main(){
	int n, e, a, b, c;
	cin >> n >> e;
	vector <vector <pair<int ,int>>> gf(n, vector <pair<int, int>> {});
	for (int i = 0; i < e ;i++){
		cin >> a >> b >> c;
		a--;b--;
		gf[a].push_back({b, c});
		gf[b].push_back({a, c});
	}
	cout << dijk(n, gf) << endl;
}