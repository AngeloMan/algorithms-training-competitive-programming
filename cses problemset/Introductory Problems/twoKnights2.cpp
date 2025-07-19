#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll n, a, r;
	cin >> n;
	for (ll i = 1; i <= n; i++){
		a = i * i;
		r = (((a - 1) * a)/2) - (i - 2) * 8 * (i - 1) /2;
		cout << r << "\n";
	}	
}	