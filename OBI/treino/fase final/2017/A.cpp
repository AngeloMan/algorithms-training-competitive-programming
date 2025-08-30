#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d, x, pd = 0, px = 0;
	cin >> n;
	for(int i= 0; i < n; i++){
		cin >> d >> x;
		if (x == (d + 1)%5 || x == (d + 2)%5) pd++;
		else px ++;
	}
	if (pd > px) cout << "dario";
	else cout << "xerxes";
}