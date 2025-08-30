#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q = 0;
	while (true){
		q++;
		cin >> n;
		if (n == 0) break;
		cout << "Teste " << q << "\n" << (1 << n) - 1 << "\n\n"; 
	}
}