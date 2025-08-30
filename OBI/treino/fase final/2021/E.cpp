#include <bits/stdc++.h>

using namespace std;

int dfs1(int i, vector <vector <int>> & gf, vector <int> & dt){
	dt[i] = 0;
	for (int nb: gf[i]){
		if (dt[nb] == -1) dt[i] = max(dt[i], dfs1(nb, gf, dt));
	}
	return dt[i] + 1;
}

void dfs2(int i, vector <vector <int>> & gf, vector <bool> & vis, int c, int & mx, vector <int> & alv){
	vis[i] = false;
	if (c == mx){
		alv.push_back(i);
		return;
	}
	for (int nb: gf[i]){
		if (vis[nb]){
			dfs2(nb, gf, vis, c + 1, mx, alv);
		}
	}
	
}

void dfs3(int i, vector <vector <int>> & gf, vector <bool> & vis, int c, int & mx, unordered_set <int> & uset, int & t2, int & t3){
	vis[i] = false;
	if (c == mx){
		t2 ++;
		if (uset.count(i)) t3++;
		return;
	}
	for (int nb: gf[i]){
		if (vis[nb]){
			dfs3(nb, gf, vis, c + 1, mx, uset, t2, t3);
		}
	}
}

int main(){
	int n, a, b;
	cin >> n;
	vector <vector <int>> gf(n, vector <int> {});
	for (int i = 0; i < n - 1; i++){
		cin >> a >> b;
		a--;b--;
		gf[a].push_back(b);
		gf[b].push_back(a);
	}
	vector <unordered_set<int>> ck(n, unordered_set <int>{});
	vector <int> alv1;
	vector <bool> vis1(n, true);
	vector <int> dt1(n, -1);
	vector <int> dt2(n, -1);
	int mx1 = dfs1(0, gf, dt1);
	//cout << mx1 << endl;
	dfs2(0, gf, vis1, 1, mx1, alv1);
	//for (int i: alv1) cout << i + 1 << " ";
	int mx2 = dfs1(alv1[0], gf, dt2), t2 = 0, t3 = 0;
	unordered_set <int> uset;
	vector <bool> vis3(n, true);
	for (int i: alv1) uset.insert(i);
	cout << mx2 << endl;
	dfs3(alv1[0], gf, vis3, 1, mx2, uset, t2, t3);
	cout << (alv1.size() - t3) * t2 + ((t3 + 1) * (t3))/2<< endl;

}