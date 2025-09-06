#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 10, a;
	vector <int> f(n, 0);
	for (int i = 0; i < 8; i++){
		cin >> a;
		f[a]++;
		if (f[a] > 4){
			cout << "N\n";
			return 0;
		}
	}
	cout << "S\n";
}