#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q = 0, a, b, u, v, m, i, j, c, ml, last = false;
	while (true){
		if (last) cout << "\n\n";
		else last = true;
		q++;
		cin >> n;
		if (n == 0) break;
		vector <int> arr(n);
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			arr[i] = a - b;
		}
		m = 0, u = -1, v = -1, i = 0, j = 0, c = arr[0], ml = 0;
		while (j < n){
			//cout << i + 1 << " " << j + 1 << " " << c << endl;
			if (c > m || c == m && ml < j - i){
				m = c;
				ml = j - i;
				u = i + 1, v = j + 1;
			}
			while (c < 0 && i <= j){
				c -= arr[i];
				i++;
			}
			//cout << i + 1 << " " << j + 1 << " " << c << endl;
			j++;
			if (j < n) c+= arr[j];
		}
		if (c > m || c == m && j - i > ml && j < n){
			u = i + 1, v = j + 1;
		}
		cout << "Teste " << q << "\n";
		if (u != -1) cout << u << " " << v;
		else cout << "nenhum";
	}
	
}