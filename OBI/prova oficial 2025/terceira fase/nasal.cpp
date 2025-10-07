#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, k, b, r = 0, mb = 0;
	cin >> n >> k;
	vector <ll> ar(n);
	vector <ll> br(n);
	// vector <pair<ll,ll>> arr;
	for (int i = 0; i < n; i++){
		cin >> ar[i];
		r += ar[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> br[i];
		r -= br[i];
		if(br[i] > mb) mb = br[i];
		// arr.push_back({ar[i], br[i]});
	}
	sort(br.rbegin(), br.rend());
	for (int i = 1; i <= k && i < n; i++) r += br[i];
	cout << r + mb << endl;
}

// int main(){
	// ll n, k, b, r = 0;
	// cin >> n >> k;
	// vector <ll> arr(n);
	// for (int i = 0; i < n; i++) cin >> arr[i];
	// sort(arr.rbegin(), arr.rend());
	// cin >> b;
	// for (int i =0; i <n; i++){
		// if (i == 0) r += arr[i];
		// else{
			// if(arr[i] > b){
				// if (k >0){
					// k--;
					// r += arr[i];
				// }
				// else r += arr[i] - b;
			// }
			// else{
				// if (k > 0){
					// r += arr[i];
					// k--;
				// }
				// else break;
			// }
		// }
	// }
	// cout << r << endl;
// }