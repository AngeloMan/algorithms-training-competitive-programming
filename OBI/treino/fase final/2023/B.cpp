#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, k, s, t, a, b, c, p, bc;
	cin >>n >> m >> k;
	vector <int> pc(k);
	vector <vector <pair<int,int>>> gf(n, vector <pair<int,int>> {});
	for (int i =  0; i < k; i++) cin >> pc[i];
	for (int i = 0; i < m; i++){
		cin >> a >> b >> c;
		a--; b--; c--;
		gf[a].push_back({b, c});
		gf[b].push_back({a, c});
	}
	cin >> s >> t;
	s--; t--;
	priority_queue <vector <int>> pq;
	pq.push({0, s, -1});

	vector <int> d(n, -1);
	while (!pq.empty()){
		p = - pq.top()[0], a = pq.top()[1], c = pq.top()[2];
		pq.pop();
		
		if (d[a] != -1) d[a] = min(d[a], p);
		else d[a] = p;
		if (a == t) {
			cout << p << endl;
			return 0;
		}
		for (auto e: gf[a]){
			b = e.first, bc = e.second;
			if (bc != c && (d[b] == -1 ||(p + pc[bc]) < d[b])){
				pq.push({- (p + pc[bc]), b, bc});
				d[b] = (p + pc[bc]);
			}
			else if (bc == c &&(d[b] == -1 || p < d[b])){
				pq.push({-p, b, bc});
				d[b] == p;
				
			}
		}
	}
	cout << d[t] << endl;
}