#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q = 0, a, b, c, d; 
	while (true){
		q++;
		cin >> n;
		if (n == 0) break;
		a = n/50;
		n-= 50 * a;
		b = n/10;
		n -= 10 * b;
		c = n/5;
		n -= c * 5;
		d = n;
		cout << "Teste " << q << "\n";
		cout << a << " " << b << " " << c << " " << d << "\n";  		
	}
}