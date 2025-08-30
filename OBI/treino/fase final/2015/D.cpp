#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, mx, end = 0, c = 0;
	cin >> n >> m;
	mx = max(m, n);
	vector <int> a(mx, 0);
	vector <int> b(mx, 0);
	for(int i = 0; i < n; i ++) cin >> a[i];
	for(int i = 0; i < m; i ++) cin >> b[i];
	vector <bool> r(mx, false);
	for (int i = mx - 1; i >= 0; i--){
		c = a[i] + b[i] + c;
		r[i] = (c%2 == 1);
		if (c >= 2) c = 1;
		else c = 0;
		if (end == 0 && r[i]) end = i;
	}
	string final = "";
	for (int i= 0; i <= end; i++){
		if (r[i]) final += "1 ";
		else final += "0 ";
	}
	cout << final << endl;
}