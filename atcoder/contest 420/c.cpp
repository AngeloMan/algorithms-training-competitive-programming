#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, q, r, sz, p, v;
	char c;
	cin >> n >> q;
	vector <int> a(n);
	vector <int> b(n);
	r = (1 << (32 - __builtin_clz(n)));
	if ((r >> 1) == n) r = r >> 1; 
	r <<= 1;
	for (int i = 0; i < n; i ++) cin >> a[i];
	for (int i = 0; i < n; i ++) cin >> b[i];
	vector <long long> sgt(r, 0);
	for (int i= 0; i < n; i++) sgt[i + (r >> 1)] = min(a[i], b[i]);
	for (int i= r - 1; i/2 > 0; i--) sgt[i/2] += sgt[i];
	for (int t = 0; t < q; t++){
		cin >> c >> p >>v;
		p--;
		if (c == 'A'){
			a[p] =v;
		}
		else{
			b[p] = v;
		}
		int at = p + (r >> 1);
		sgt[at] = min(a[p], b[p]);
		while(at/2 > 0){
			at/=2;
			sgt[at] = sgt[2 * at] + sgt[2 * at + 1];
		}
		cout << sgt[1] << "\n";
	}
}