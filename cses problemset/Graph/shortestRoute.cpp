#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

int main() {
    int n, e, a, b, c;;
    cin >> n >> e;
    vector <ll> d(n, INF);
    vector <bool> p(n, true);
    vector <vector<pair<ll, ll>>> grafo(n, vector <pair<ll, ll>> {});
    for (int i = 0; i < e; i++){
    	cin >> a >> b >> c;
    	grafo[a - 1].push_back({b - 1, c});
    }
    priority_queue <vector<ll>> pq;
	d[0] = 0;
	pq.push({0, 0});
	while (!pq.empty()){
		ll x = pq.top()[1];
		pq.pop();
		if(p[x]){
			p[x] = false;
			for (auto y: grafo[x]){

				ll r = y.first, t = y.second;
				if (d[r] > d[x] + t) d[r] = d[x] + t;
				pq.push({-d[r], r});
			}
		}
	}
    for (ll i: d) cout << i << " ";
}