#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
	int as, bs;
    string a, b;
    int i = 0;
    cin >> as >> a >> bs >> b;
    while (i < min(b.size(), a.size()) && a[i] == b[i])i++;
    
    cout << i;
}