#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
int t = 0;
unordered_set <int> st;

void ds(int i, vector <vector<int>> & gf, int n){
	t++;
	if (i == n - 1) return;
	for (int j = i + 1; j< n; j ++){
		bool alow = true;
		for (int b: gf[j]){
			if (st.count(b)) alow = false;
		}
		if (alow){
			st.insert(j);
			ds(j, gf, n);
			st.erase(j);
		}
	}
}

int main() {
    int n, r, a, b;
    cin >> n >> r;
    vector <vector<int>> gf(n, vector<int> {});
    for (int i = 0; i < r; i++){
    	cin >> a >> b;
    	gf[a - 1].push_back(b - 1);
    	gf[b - 1].push_back(a - 1);
    }
    for (int i = 0; i < n; i++){
    	st.insert(i);
    	ds(i, gf, n);
		st.erase(i);
    }
    cout << t;
}