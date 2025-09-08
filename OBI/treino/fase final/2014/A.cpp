#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, r = -1, m = 0;
	cin >> n;
	unordered_map <int, int> umap;
	for (int i = 0;i < n; i++){
		cin >> a;
		if (!umap.count(a)) umap[a] = 0;
		umap[a]++;
		if (umap[a] > m || umap[a] == m && a > r){
			r = a;
			m = umap[a];
		} 
	}
	cout << r << endl;
	return 0;
}