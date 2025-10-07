#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, l = -1, r = -1, final = 0;
	cin >> n;
	vector <ll> arr(n);
	vector <ll> rarr(n, n);
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if (arr[i] & 1){
			if (r != -1) rarr[r] = i;
			r = i;
		}
	}
	for (int i = 0; i < n; i++){
		if (arr[i] & 1){
			final += (rarr[i] - i) * (i - l);
			l = i;
		}
	}
	cout << final << "\n";
}