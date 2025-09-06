#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, e, s, m, a, b, t;
	cin >> n >> e >> s >> m;
	vector <vector <pair<int, int>>> gf (n, vector <pair<int, int>> {});
	for (int i = 0; i <m ;i++){
		cin >> a >> b >> t;
		gf[a].push_back({b, t});
	}
	vector <vector <int>> va(n, vector <int> (3, true));
	va[e][0] = false;
	queue <pair<int, int>> q;
	q.push({e, 0});	
	while (!q.empty()){
		a = q.front().first, t = q.front().second;
		q.pop();
		if (a == s){
			cout << t << "\n";
			return 0;
		}
		for (auto nb: gf[a]){
			if (((nb.second && !(t % 3)) || (!nb.second && t % 3)) && va[nb.first][(t + 1) % 3]){
				va[nb.first][(t + 1) % 3] = false;
				q.push({nb.first, t + 1});
			}
		}
	}
	cout << "*\n";
}