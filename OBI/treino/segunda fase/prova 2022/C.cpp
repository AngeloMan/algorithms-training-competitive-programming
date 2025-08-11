#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int maxp(string s, int i, bool even, int n){
	int t = 0, l = i, r = i;
	if (even) r++;
	while (l >= 0 && r <= n){
		if (s[l] == s[r]) t = r - l + 1;
		else break;
		l--;
		r++;
	}
	return t;
}
	
	
int main() {
    int n, r = 1;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
    	r =  max(r, maxp(s, i, false, n));
    	if (i < n - 1) r = max(r, maxp(s, i, true, n));
    }
    cout << r;
}