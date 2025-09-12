// 50/100
#include <bits/stdc++.h>

using namespace std;

void dfs(int i, int p, int d, vector <vector<int>>&t, int & mx, int &imx){
	if (d > mx){
		mx = d;
		imx = i;
	}
	for (int a: t[i]){
		if (a != p) dfs(a, i, d + 1, t, mx, imx);
	}
}

int main(){
	int n, k, a, b;
	cin >> n >> k;
	vector <vector <int>> t(n, vector <int> {});
	for(int i = 0; i < n - 1; i++){
		cin >> a >> b;
		a--;b--;
		t[a].push_back(b);
		t[b].push_back(a);
	}
	int mx1 = 1, imx1 = 0;
	dfs(0, 0, 1, t, mx1, imx1);
	//cout << imx1 + 1 << endl;
	int mx2 = 1, imx2 = imx1;
	dfs(imx1, imx1, 1, t, mx2, imx2);
	cout << floor(ceil(double(mx2)/k)/2) << endl;
}