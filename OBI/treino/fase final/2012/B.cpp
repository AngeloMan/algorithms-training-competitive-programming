#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, s, a, b;
	cin >> n;
	vector <int> arr(n);
	unordered_map <int, int> umap;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if (!umap.count(arr[i])) umap[arr[i]] = 0;
		umap[arr[i]]++;
	}
	cin >> s;
	for (int i: arr){
		umap[i]--;
		b = s - i;
		if (umap.count(b) && umap[b]){
			cout << min(i, b) << " " << max(i, b) << endl;
			return 0;
		}
	}
}