#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
	ll n, t, a, c, x , k;
	cin >> n;
	deque <pair<ll, ll>> ns;
	for (int i = 0; i < n; i ++){
		cin >> a;
		if (a == 1){
			cin >> c >> x;
			ns.push_back({c, x});
		}
		else{
			cin >> k;
			t = 0;
			while (k > 0){
				t += ns[0].second * min(k, ns[0].first);
				if (ns[0].first > k){
					ns[0].first -= k;
					k = 0;
				}
				else{
					k -= ns[0].first;
					ns.pop_front();
				}
				
			}
			cout << t << "\n";
		}
	}
	
}