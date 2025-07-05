#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
	int n;
	cin >> n;
	unordered_set <string> us;
	vector <string> s(n);
	for (int i = 0; i< n;i ++){
		cin >> s[i];
	}
	for (int i = 0; i <n ;i ++){
		for (int j = i + 1; j < n; j++){
			us.insert(s[i] + s[j]);
			us.insert(s[j] + s[i]);
		}
	}
	cout << us.size();
	return 0;
}