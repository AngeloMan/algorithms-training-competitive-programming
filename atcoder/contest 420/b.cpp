#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, mx = 0;
	cin >> n >> m;
	vector <int> ps(n); 
	vector <int> vts(m, 0); 
	for (int i = 0; i < n; i++){
		cin	>> ps[i];
		int k = ps[i];
		for (int j = m - 1; j >= 0; j--){
			if (k%10) vts[j]++;
			k/=10;
		}
	}
	vector <int> pts(n, 0);
	for (int i = 0; i <n; i++){
		int k = ps[i];
		for (int j = m - 1; j >= 0; j--){
			if (k%10){
				if (2 * vts[j] < n || vts[j] == n) pts[i]++;
			}
			else{
				if (vts[j] == 0 || 2 * vts[j] > n) pts[i]++;
			}
			k/= 10;
		}
		mx = max(mx, pts[i]);
	}
	for (int i = 0; i < n; i++){
		if (pts[i] == mx) cout << i + 1 << " ";
	}
	cout << "\n";
}