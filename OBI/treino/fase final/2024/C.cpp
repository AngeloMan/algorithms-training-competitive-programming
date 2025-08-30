#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	ll nt, a, b, m, n, t = 0;
	cin >> nt >> a >> b;
	vector <ll> intbg;
	unordered_map<ll, ll> umapbg;
	vector <ll> inted;
	unordered_map<ll, ll> umaped;
	vector <pair<ll, ll>> ys;
	for (int i = 0; i < nt; i++){
		cin >> m >> n;
		ll u = m * a + n, v = m * b + n; 
		ys.push_back({u, v});
		if (!umapbg.count(u)){
			umapbg[u] = 0;
			intbg.push_back(u);
		}
		umapbg[u]++;
		if (!umaped.count(v)){
			umaped[v] = 0;
			inted.push_back(v);
		}
		umaped[v]++;
		// cout << u << " "<< v << endl;
	}
	sort(ys.begin(), ys.end());
	vector <pair<ll, ll>> ny(nt);
	for (int i = 0; i < nt; i++){
		ny[i] = {ys[i].second , i};
	}
	sort(ny.begin(), ny.end());
	for (int i: intbg) t += (umapbg[i] * (umapbg[i] - 1))/2;
	if(a != b){
		for (int i: inted) t += (umaped[i] * (umaped[i] - 1))/2;
	}
	//cout << endl;
	// cout << nt << endl;
	int r = (1 << (32 - __builtin_clz(nt)));
	if (r != nt * 2) r <<= 1;
	// cout << r << endl;
	vector <int> sgt(r, 0);
	for (int i = 0; i < nt; i++){
		// cout << ny[i].second << endl;
		int z = ny[i].second + r/2, l;
		l = z;
		sgt[z] = 1;
		while (z/2 > 0){
			z/=2;
			sgt[z] = sgt[2 * z + 1] + sgt[2 * z];
			if (2 * z + 1 != l) t += sgt[2 * z + 1];
			l = z;
		}
		// for (int j = 0; j < i; j++){
			// if(ny[j].second > ny[i].second) t++;
		// }
	}
	cout << t << endl;
}