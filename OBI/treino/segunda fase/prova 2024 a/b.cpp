#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define uset unordered_set

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve(string a, string b){
	uset <char> alfa;
	for(char c: a)
		alfa.insert(c);
	for(char c: b){
		if (!alfa.count(c)){
			cout << "N";
			return;
		}
	}

	cout << "S";
}

int main() {
    int n, m;
    string a, b;
    cin >> n >> m >> a >> b;
   	solve(a, b); 
}