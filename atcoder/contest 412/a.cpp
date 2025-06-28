#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int n, a, b, t = 0;
    cin >> n;
    for (int i = 0; i< n; i ++){
    	cin >>a >> b;
    	if (b > a) t++;
    }
    cout << t;
}