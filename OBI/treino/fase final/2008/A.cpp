#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, r = 0;
	cin >> n;
	char a;
	for (int i =0; i < n; i++){
		cin >> a;
		if (a == 'A') r++;
		if (a == 'C' || a == 'P') r += 2;
	}
	cout << r << endl;
}