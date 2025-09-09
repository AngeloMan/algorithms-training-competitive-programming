#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a= 0, b = 0, v;
	cin >> n;
	for (int i= 0; i < n; i++) {
		cin >> v;
		if (v < 50) a++;
		else if (v < 85) b++;
	}
	cout << a << " " << b << "\n";
}