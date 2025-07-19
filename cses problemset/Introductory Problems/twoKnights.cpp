#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
	ll t = 0, s = 0, n, a, r;
	cin >> n;
	cout << 0 << "\n";
	for (ll i = 2; i <= n; i++){
		a = pow(i, 2) - 1;
		r = (((a + 1) * a)/2) - t;
		cout << r << "\n";
		s += 8;
		t += s;
	}	
}	