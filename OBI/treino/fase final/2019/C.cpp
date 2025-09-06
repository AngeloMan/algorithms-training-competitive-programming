#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	vector <bool> c(3, true);
	cin >> a >> b;
	a %= 3; b %= 3;
	c[a] = false;
	if (a == b) b ++;
	b %= 3;
	c[b] = false;
	for (int i = 0; i < 3; i++){
		if (c[i]) cout<< i << endl;
	}
}