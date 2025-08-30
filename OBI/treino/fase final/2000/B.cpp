#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, q = 0, r;
	while (true){
		q++;
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; ++i){
			cin >> a;
			if (a == i + 1) r = a;
		}
		
		cout << "Teste " << q << "\n";
		cout << r << "\n\n";
	}
}