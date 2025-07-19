#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int dfs(int p, int l, vector<vector<int>>&tree, int & r){
	int f = 0, s = 0;
	for (int c: tree[p]){
		if (c != l){
			int x = dfs(c, p, tree, r);
			if(x > f){
				s = f;
				f = x;
			}
			else if (x > s) s = x;
		}
	}

	r = max(r, f + s);
	return f + 1;
}

int main() {
    int n, a, b, r = 0;
    cin >> n;
    vector <vector<int>> tree(n, vector<int>{});
    for (int i = 0; i < n - 1; i++){
    	cin >> a >> b;
    	tree[a - 1].push_back(b - 1);
    	tree[b - 1].push_back(a - 1);
    }
    dfs(0, -1, tree, r);
    cout << r;
}