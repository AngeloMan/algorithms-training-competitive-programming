#include <bits/stdc++.h>
#define ll long long
using namespace std;

int find(int a, vector <int> & r, vector <int> & p){

	if (a == p[a]) return a;
	p[a] = find(p[a], r, p);
	return p[a];
}

void uni(int a, int b, vector <int> & r, vector <int> & p){

	a = find(a, r, p);
	b = find(b, r, p);
	if (a == b) return;
	if (r[a] < r[b]) swap(a, b);
	p[b] = a;
	r[a] = max(r[a] , r[b] + 1);
}

int main(){
	int n, m, k, rd = 0, hd = 0, a, b, c;
	cin >> n >> m >> k;
	vector <int> r(n, 0);
	vector <int> p(n);
	for (int i = 0; i < n; i++) p[i] = i;
	vector <pair<int,int>> rde;
	for (int i = 0; i < m; i++){
		cin >> a >> b >> c;
		// cout << a << " " << b << " " << c << endl;
		a--;b--;
		if (c == 1){
			hd++;
			a = find(a, r, p), b = find(b, r, p);
			if (a == b){
				cout << "N\n";
				return 0;
			}
			uni(a, b, r, p);
		}
		else{
			rde.push_back({a, b});
		}
	}
	
	for (auto e: rde){
		int u = e.first, v = e.second;
	 	a = find(u, r, p), b = find(v, r, p);
	 	if (a != b){
	 		rd++;
	 		uni(a, b, r, p);
	 	}
	}
	
	if (rd < m - hd - k){
		cout << "N\n";
		return 0;
	}
	
	cout << "S\n";
}