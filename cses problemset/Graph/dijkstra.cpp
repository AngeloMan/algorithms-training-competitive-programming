#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt,tune=native")
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e16;
const ld EPS = 1e-9;

int main() {
    ll n, m, s, t, a, b, c;
    cin >> n >> m >> s >> t;
    vector <ll> past(n, -1);
    vector <ll> d(n, INF);
    d[s] = 0;
    vector <vector<pair<ll, ll>>> gf(n, vector <pair<ll, ll>> {});
    for (ll i = 0; i < m; i++){
    	cin >> a >> b >> c;
    	gf[a].push_back({b, c});
    }
    priority_queue <vector<ll>> pq;
    pq.push({0, s});
    d[s] = 0;
    while (!pq.empty()){
    	ll dist = - pq.top()[0], c = pq.top()[1];
    	pq.pop();
    	if (c == t) break;
    	if (dist <=  d[c]){
    		for(auto nb: gf[c]){
    			ll u = nb.first, w = nb.second;
    			if (d[u] > d[c] + w){
    				d[u] = d[c] + w;
    				pq.push({-d[u], u});
    				past[u] = c;
    			}
    		}
    	}
    }
    
    if (d[t] != INF){
    	vector <ll> rp;
	    a = t;
	    while (a != s){
	    	rp.push_back(a);
	    	a = past[a];
	    }
	    rp.push_back(s);
	    ll r = rp.size();
    	cout << d[t] << " " << r - 1 << "\n";
	    for (ll i = r - 1; i > 0; --i){
	    	cout << rp[i] << " " << rp[i - 1] << "\n";
	    }
    }
    else cout << -1;
     
}