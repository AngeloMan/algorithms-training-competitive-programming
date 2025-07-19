#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	ll n, m, a, b, c, t = 0, ct = 1;
	cin >> n >> m;
	vector <bool> ck(n, false);
	vector <vector<vector<ll>>> gf(n, vector<vector<ll>> {});
	for (int i = 0; i < m; i++){
		cin >> a >> b >> c;
		gf[a - 1].push_back({b - 1, c});
		gf[b - 1].push_back({a -1, c});
	}

	ck[0] = 1;
	priority_queue <vector<ll>> pq;
	for (auto e: gf[0]) pq.push({-e[1], e[0]});
	while (!pq.empty()){
		ll cost = - pq.top()[0], nb = pq.top()[1];
		pq.pop();
		if (!ck[nb]){
			t += cost;
			ct++;
			ck[nb] = true;
			for (auto e: gf[nb]) pq.push({-e[1], e[0]});
		}
	}
	if (ct == n) cout << t;
	else cout << "IMPOSSIBLE";
}