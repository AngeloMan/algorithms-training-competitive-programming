#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int n, h = 0, m = 1e9, t = 0;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		h = max(h, arr[i]);
		m = min(m, arr[i]);
	}
	while(m < h){
		vector <bool> ckarr(n, false);
		for (int i = 0; i < n; i++){
			if (arr[i] == m){
				arr[i] += 1;
				ckarr[i] = true;
				if (i == 0 || !ckarr[i - 1]) t++;
			}
		}
		m++;
	}
	cout << t << endl;
}