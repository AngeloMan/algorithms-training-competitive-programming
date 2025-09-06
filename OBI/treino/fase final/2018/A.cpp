#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, p = -1, z = -1, c = -1;
	cin >> n;
	vector <int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n - 1; i++){
		if (z == -1 && num[i] == 0 && i != n - 1) z = i;
		if (num[i] == 5 && i != n - 1) c = i;
		if (num[i] % 5 == 0 && i != n - 1 && p == -1) p = i;
	}
	if (p == -1){
		cout << p << endl;
		return 0;
	}
	if (num[n - 1] > 5) swap(num[n - 1], num[p]);
	else if (num[n - 1] < 5 && z != -1) swap(num[n - 1], num[z]);
	else swap(num[n - 1], num[c]);
	for (int i: num) cout << i << " ";
	cout << endl;
}