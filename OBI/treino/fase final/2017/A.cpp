#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q, ns, a, b, r, l, c;
	cin >> n >> q;
	ns = 1 << (32 - __builtin_clz(n));
	if (n << 1 == ns) ns >>= 1;
	vector <int> sgt(ns << 1, 0);
	string final = "";
	for (int i = 0; i < n ;i++) cin >> sgt[i + ns];
	for (int i = ns - 1; i > 0 ; i--) sgt[i] = sgt[i << 1] + sgt[(i << 1) + 1];
	for (int z = 0; z < q; z++){
		cin >> c >> a;
		a += ns - 1;
		if (c == 0){
			cin >> b;
			sgt[a] = b;
			a >>= 1;
			while (a > 0){
				sgt[a] = sgt[a * 2] + sgt[(a * 2) + 1];
				a /= 2;
			}
		}
		else {
			r = sgt[1], l = a;
			while (a > 0){
				if ((a * 2) + 1 != l && (a * 2) + 1 < 2 * ns) r -= sgt[(a * 2) + 1];
				l = a;
				a /= 2;
			}
			final += to_string(r) + "\n";
		}
	}
	cout << final;
}

