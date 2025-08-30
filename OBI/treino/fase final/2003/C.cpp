#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b, q = 0, m;
	while (true){
		cin >> n;
		if (n == 0) return 0;
		m = 0;
		unordered_map <int, vector<int>> umap;
		q++;
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			if (b > m) m = b;
			if (!umap.count(b)) umap[b] = {};
			umap[b].push_back(a);
		}
		cout << "Turma " << q << "\n";
		for (int i: umap[m]) cout << i << " ";
		cout << "\n\n";
	}
}