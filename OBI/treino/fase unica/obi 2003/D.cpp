#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q = 0, a, b;
	while (true){
		cin >> n;
		if (n == 0) return 0;
		q++;
		vector <int> x(n);
		vector <int> y(n);
		for (int i = 0; i < n; i++){
			cin >> x[i] >> y[i];
		}
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		int i = floor(double(n + 1)/2) - 1, j = ceil(double(n + 1)/2) - 1;
		if (i < 0) i = 0;
		if (j < 0) j = 0;
		a = (x[i] + x[j]) / 2, b = (y[i] + y[j]) / 2;
		cout << "Teste " << q << "\n" << a << " " << b << "\n\n";
	}
}