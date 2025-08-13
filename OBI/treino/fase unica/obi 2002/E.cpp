#include <bits/stdc++.h>

using namespace std;

bool check(int a, int i, int n, vector <int> & arr){
	if (a == 0) return true;
	if (i == n || a < 0) return false;
	bool ans = false;
	for (int j = i; j < n; j++) ans |= check(a - arr[j], j + 1, n, arr);
	return ans;
}

int main(){
	int t, x, y, n, q = 0, a;
	while (true){
		cin >> x >> y >> n;
		q++;
		t = 0;
		if (n == 0) return 0;
		vector <int> arr(n);
		for (int i = 0; i <n; i++){
			cin >> arr[i];
			t += arr[i];
		}
		string r = "N";
		a = t + abs(x - y);
		if (a % 2 == 0 && check(a/2, 0, n, arr)) r = "S";
		cout << "Teste " << q << "\n" << r << "\n\n";
	}
}