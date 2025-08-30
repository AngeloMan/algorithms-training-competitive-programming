#include <bits/stdc++.h>

using namespace std;

int find(int a, vector <int> & parent){
	if (a == parent[a]) return a;
	parent[a] = find(parent[a], parent);
	return parent[a];
}

void uni(int a, int b, vector <int> & rank, vector <int> & parent){
	a = find(a, parent); b = find(b, parent);
	if (rank[b] > rank[a]) swap(a, b);
	parent[b] = a;
	rank[a] = max(rank[b] + 1, rank[a]);
}

int main(){
	int q = 0;
	while (true){
		q++;
		int n, m, a, b, c;
		cin >> n >> m;
		if (n == 0) break;
		vector <int> rank(101, 1);
		vector <int> parent(101);
		for (int i = 0; i < 101; i++){
			parent[i] = i;
		}
		vector <vector<int>> ed;
		for (int i = 0;i < m; i++){
			cin >> a >> b >> c;
			ed.push_back({c, min(a, b), max(a, b)});	
		}
		sort(ed.begin(), ed.end());
		vector <pair<int, int>> r;
		for (auto e: ed){
			a = e[1], b = e[2];
			if (find(a, parent) != find(b, parent)){
				uni(a, b, rank, parent);
				r.push_back({a, b});
			} 
		}
		cout << "Teste " << q << "\n";
		for (auto e: r){
			cout << e.first << " " << e.second << "\n";
		}
		cout << "\n";
	}
}
