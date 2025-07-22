#include <bits/stdc++.h>

using namespace std;
int inf = 1e9;

int main(){
	int a, l, n, u ,v, m = inf, id = -2;
	cin >> a >> l >> n;
	for (int i = 0; i < n; i ++){
		cin >> u >> v;
		if (a > u || l > v) swap(u, v);
		if (a > u || l > v)continue;
		
		int ar = u * v - a * l;
		if (m > ar){
			m = ar;
			id = i;
		}
	}
	cout << id + 1 << endl;
}