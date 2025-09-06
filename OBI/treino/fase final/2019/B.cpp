#include <bits/stdc++.h>

using namespace std;

void dfs1(int i, int p, int c, vector <vector <int>> & gf, int & hd, int & nd){
	if (c > hd){
		hd = c;
		nd = i;
	}
	for (int nb: gf[i]){
		if (nb != p) dfs1(nb, i, c + 1, gf, hd, nd);
	}
}

int dfs2(int i, int p, vector <vector <int>> & gf, vector <int> & d, vector <int> & md, int & r){
	if (i != p) d[i] = d[p] + 1;
	md[i] = 0;
	for (int nb: gf[i]){
		if (nb != p) md[i] = max(md[i], dfs2(nb, i, gf, d, md, r));
		if (d[nb] > d[r]) r = nb;
	}
	return md[i] + 1;
}

int dfs3(int i, int p, vector <vector <int>> & gf, vector <int> & d2, vector <int> & md2){
	if (i != p) d2[i] = d2[p] + 1;
	md2[i] = 0;
	for (int nb: gf[i]){
		if (nb != p) md2[i] = max(md2[i], dfs3(nb, i, gf, d2, md2));
	}
	return md2[i] + 1;
}

int solve(int n){
	int a, b;
	vector <vector <int>> gf(n, vector <int> {});
	for (int i= 0; i < n - 1; i++){
		cin >> a >> b;
		a--;b--;
		gf[a].push_back(b);
		gf[b].push_back(a);
	}
	vector <int> d(n);
	vector <int> md(n);
	int hd = 0, nd;
	dfs1(0, 0, 0, gf, hd, nd);
	int r = nd;
	d[nd] = 0;
	dfs2(nd, nd, gf, d, md, r);
	vector <int> d2(n);
	d2[r] = 0;
	vector <int> md2(n);
	dfs3(r, r, gf, d2, md2);
	int mnd = -1, mn = 1e9;
	for (int i = 0; i < n; i++){
		if (max(max(d[i], md[i]), max(d2[i], md2[i])) < mn){
			mn = max(max(d[i], md[i]), max(d2[i], md2[i]));
			mnd = i + 1;
		}
	}
	return mnd;
}

int main(){
	int n, m;
	cin >> n >> m;
	int a = solve(n), b = solve(m);
	cout << a << " " << b << endl;	
}