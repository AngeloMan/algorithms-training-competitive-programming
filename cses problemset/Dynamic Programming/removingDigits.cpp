#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll inf = 1e12;
ll mod = 1e9 + 7;

int hd(int n){
	int m = 0;
	while (n != 0){
		m = max(m, n% 10);
		n /= 10;
	}
	return m;
}

int main(){
	int n;
	cin >> n;
	int i = 0;
	while (n != 0){
		n -= hd(n);
		i++;
	}
	cout << i;
}