#include <bits/stdc++.h>

using namespace std;

int qd(int x, int y){
	if (x > 0 && y > 0) return 1;
	if (x > 0) return 2;
	if (y > 0) return 3;
	return 4;
}

int main(){
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	a-= n/2; b-= n/2;c-= n/2;d-= n/2;
	if (qd(a, b) == qd(c, d)) cout << "N" << endl;
	else cout << "S" << endl;
}