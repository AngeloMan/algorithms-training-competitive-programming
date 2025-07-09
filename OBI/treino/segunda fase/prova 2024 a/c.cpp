#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    // m[i][j] = n * ln[i] + cl[j] + 1
    int m, n, q, a, b;
    string s;
    cin >> m >> n >> q;
    int ln[m], cl[n];
    for (int i = 0; i < m; i++) ln[i] = i;
    for (int i = 0; i < n; i++) cl[i] = i;
    for(int k = 0; k < q; k++){
    	cin >> s >> a >> b;
    	if (s == "C") swap(cl[a - 1], cl[b - 1]);
    	else swap(ln[a - 1], ln[b - 1]);
    }
    for (int i = 0; i < m; i++){
    	for (int j = 0; j < n;j++){
    		if (j < n - 1)cout << (n * ln[i] + cl[j]) + 1 << " "; 
    		else cout << (n * ln[i] + cl[j]) + 1;
    	}
    	cout << "\n";
    }
}