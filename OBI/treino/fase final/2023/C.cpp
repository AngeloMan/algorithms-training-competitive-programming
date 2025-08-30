#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int n, m;
	cin >> n >> m;
	vector <ll> cr(n);
	vector <ll> mc(m);
	for (int i = 0; i < n; i++) cin >> cr[i];
	sort(cr.begin(), cr.end());
	// for (int i = 0; i < m && cr.size();i++) cr.pop_back();
	for (int i = 0; i < m; i++) cin >> mc[i];
	sort(mc.begin(), mc.end());
	//n = cr.size();
	vector <ll> tc(m, 0);
	vector <ll> tm(m, 0);
	for (int j = n - 1; j >= 0; j--){
		ll p = cr[j];
		ll i = 0;
		while (i + 1 < m && tm[i] + tc[i] * mc[i]* p >= tm[i + 1] + tc[i + 1] * mc[i + 1] * p) i++;
		tm[i] += tc[i] * mc[i]* p;
		tc[i]++;
	}
	ll r = 0;
	for (ll v: tm) r += v;
	cout << r << endl;
}