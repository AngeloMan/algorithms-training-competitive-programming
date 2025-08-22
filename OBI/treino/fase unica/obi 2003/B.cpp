#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q = 0, a, b, j, z;
	while (true){
		q++;
		cin >> n;
		if (n == 0) break;
		j = 0, z = 0;
		cout << "Teste " << q << "\n";
		for (int i = 0;i < n; i++){
			cin >> a >> b;
			j += a, z += b;
			cout << j - z << "\n";
		}
		cout << endl;
	}
}