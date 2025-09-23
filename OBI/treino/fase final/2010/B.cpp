#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, k, t = 0;
	cin >>n >> k;
	if (k == 1){
		cout << n << endl;
		return 0;
	}
	while (k > 0 && n > 1){
		n = ceil((long double)(n)/2);
		k--;
		t++;
	}
	cout << t + n - 1 << endl;
}