#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, v, x, y, m, q= 0;
	while (true){
		q++;
		cin >> a >> v;
		if (a == 0) return 0;
		m = 0;
		vector <int> f(a, 0);
		for (int i =0 ;i < v; i++){
			cin >> x >> y;
			x--; y--;
			f[x]++; f[y]++;
			if (f[x] > m) m = f[x];
			if (f[y] > m) m = f[y];
		}
		cout << "Teste " << q << "\n";
		for (int i = 0;i<a;i++) {
			if (f[i] == m) cout << i + 1 << " ";
		}
		cout << "\n\n";
	}
}