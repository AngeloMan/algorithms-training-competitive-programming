#include <bits/stdc++.h>

using namespace std;
int inf = 1e9;

bool check(int a, int b ,int n){
	return (a >= 0 && b >= 0 && a < n && b < n);
}

int main(){
	int n;
	cin >> n;
	vector <vector<int>> mt(n, vector <int> (n));
	vector <vector<int>> dt(n, vector <int> (n, inf));
	dt[0][0] = 0;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; j++)	cin >> mt[i][j];
	}
	priority_queue <vector<int>> pq;
	pq.push({0, 0, 0});
	vector <pair<int, int>> dr = {{1,0},{0,1},{-1,0},{0,-1}};
	while (!pq.empty()){
		int d = -pq.top()[0], i = pq.top()[1], j = pq.top()[2];
		if (i == n - 1 && j == n - 1){
			cout << d << endl;
			return 0;
		}
		pq.pop();
		if (d == dt[i][j]){
			for (auto w: dr){
				int u = i + w.first, v = j + w.second;
				if (check(u, v, n) && d + mt[u][v] < dt[u][v]){
					dt[u][v] = d + mt[u][v];
					pq.push({-dt[u][v], u, v});
				}
			}
		}		
	}
}