#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y, r;
	cin >> x >> y;
	r = (x + y)%12;
	if(r == 0) r = 12;
	cout << r << endl;
}