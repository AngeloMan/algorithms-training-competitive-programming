#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, q, k, t = 0, a;
	cin >> n >> q >> k;
	vector <int> arr(n);
	for (int i =0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			// cout << j - i + abs(arr[i] - arr[j]) << endl;
			if ( j - i + abs(arr[i] - arr[j]) == k) t++;
			
		}
	}
	cout << t << endl;
	vector <bool> d(n, false);
	vector <int> r(n, n);
	for (int z = 0; z < q; z++){
		cin >> a;
		a--;
		d[a] = true;
		int l = -1;
		for (int i = 0; i < a; i++){
			if (d[i]) l = i;
		}
		for (int i = a - 1; i >= 0 && !d[i]; i--) r[i] = a;
		for (int i = l + 1; i < a; i++){
			for (int j = a; j < r[a]; j++){
				if ( j - i + abs(arr[i] - arr[j]) == k) t--;
			}
		}
		for (int i = a + 1; i < r[a];i++){
			if ( i - a + abs(arr[i] - arr[a]) == k) t--;
		}
		cout << t << "\n";
	}
	
}