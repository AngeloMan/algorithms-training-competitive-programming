#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, s, p, a , b, q = 0;
	while (true){
		cin >> n >> m >> s >> p;
		if (n == 0) return 0;
		s--;
		q++;
		vector <vector <int>> gf(n, vector <int> {});
		vector <bool> vis(n, false);
		for (int i = 0; i < m; i ++){
			cin >> a >> b;
			a--, b--;
			gf[a].push_back(b);
			gf[b].push_back(a);
		}
		queue <pair<int,int>> qu;
		vis[s] = true;
		qu.push({s, 0});
		while (!qu.empty()){
			a = qu.front().first, b = qu.front().second;
			qu.pop();
			for (int i: gf[a]){
				if (!vis[i]){
					vis[i] = true;
					if (b + 1 < p) qu.push({i, b + 1});
				}
			}
		}
		cout << "Teste " << q << "\n";
		for (int i = 0; i < n; i++){
			if (i != s && vis[i]) cout << i + 1<< " ";
		}
		cout << "\n\n";
	}
}