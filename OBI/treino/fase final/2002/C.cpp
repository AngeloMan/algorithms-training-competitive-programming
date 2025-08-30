#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, l, mx, mn, q = 0;
	while (true){
		cin >> n >> l;
		if (n == 0) return 0;
		q++;
		vector <int> arr(n);
		mx = -1e9, mn = 1e9;
		for (int i = 0; i < n;i++){
			cin >> arr[i];
			if(i > 0) arr[i] += arr[i - 1];
			if (i >= l){
				mx = max(mx, arr[i] - arr[i - l]);
				mn = min(mn, arr[i] - arr[i - l]);
			}
		}
		mx = max(mx, arr[l - 1]);
		mn = min(mn, arr[l - 1]);
		//cout << "Teste " << q << "\n" << mn/l << " " << mx/l << "\n\n";
	}
}