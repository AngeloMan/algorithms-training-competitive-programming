#include <bits/stdc++.h>

using namespace std;

int m ,n , si, sj, i = -1, j = -1;
vector<vector<int>> dr ={{1,0},{0,1},{-1,0},{0,-1}};

void solve(int pi, int pj, int li, int lj,vector<string>& gd){
	i = pi, j = pj;
	for (auto d: dr){
		int u = pi + d[0], v = pj + d[1];
		if (u >= 0 && v >= 0 && u < m && v < n && gd[u][v] == 'H' && (u != li || v != lj)) {
			solve(u, v, pi, pj, gd);
		}
	}
	return;
}

int main(){
	cin >> m >> n;
	vector <string> gd(m);
	for (int i = 0; i < m; i++){
		cin >> gd[i];
		for (int j =0; j <n;j++){
			if (gd[i][j] == 'o'){
				si = i; 
				sj = j;
			}
		}
	}
	solve(si, sj, -1, -1, gd);
	cout << i + 1 << " " << j + 1<< endl;
}