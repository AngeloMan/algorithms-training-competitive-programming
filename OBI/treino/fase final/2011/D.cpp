#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n, m, a, b, c, t = 0, r = 0;
	cin >> n >> m;
	vector <vector <pair<int, int>>> gf(n, vector <pair<int, int>> {});
	for (int i = 0; i < m; i++){
		cin >> a >> b >> c;
		a--;b--;
		gf[a].push_back({b, c});
		gf[b].push_back({a, c});
	}
	vector <int> nc(n, true);
	priority_queue <pair<int, int>> pq;
	pq.push({0, 0});
	while (!pq.empty() && t < n){
		c = - pq.top().first, a = pq.top().second;
		pq.pop();
		if (nc[a]){
			nc[a] = false;
			t++;
			r += c;
			for (auto nb: gf[a]){
				if (nc[nb.first]) pq.push({-nb.second, nb.first});
			}
		}
	}
	cout << r << endl;
}