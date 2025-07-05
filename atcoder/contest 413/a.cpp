#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int n, m, t = 0, a;
    cin >> n >> m;
    for(int i = 0; i < n; i ++){
    	cin >> a;
    	t += a;
    }
    if (t <= m) cout  << "Yes";
    else cout << "No";
}