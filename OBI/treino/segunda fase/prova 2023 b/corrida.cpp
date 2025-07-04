// 50/100
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int n, a, b;
    string u, v;
    cin >> n;
    if (n == 2){
    	cin >> a >> u >> b >> v;
    	int r = a + max(0, b - a);
    	cout << r * 2 + 8;
    }
	
    else{	
    	int r = 8;
		for (int i = 0; i < n; i++){
			cin >> a >> u;
			r += a; 
		}    	
		cout << r;
    };
}