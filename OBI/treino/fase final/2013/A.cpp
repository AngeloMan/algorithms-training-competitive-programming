#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 3, t = 0;
	vector<int> j(n);
	for(int i = 0; i < n; i++) cin >> j[i];
	sort(j.begin(), j.end());
	int l = 0;
	for (int i = 0; i < 3 ;i++){
		if (l < j[i]) t += (j[i] - l) * 100;
		l = j[i] + 200;
	}
	if (l < 600) t += (600 - l) * 100;
	cout << t << endl;
}