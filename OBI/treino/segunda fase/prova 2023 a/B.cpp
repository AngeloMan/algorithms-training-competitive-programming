#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int e, m, d, a, b, c, t = 0;
    cin >> e >> m >> d;
    vector <vector<int>> am;
    vector <vector<int>> in;
    vector <unordered_set <int>> tr(e, unordered_set <int> {});
    for(int i = 0; i < m; i++){
    	cin >> a >> b;
    	am.push_back({a - 1, b - 1});
    	
    }
    for(int i = 0; i < d; i++){
    	cin >> a >> b;
    	in.push_back({a - 1, b - 1});
    }
    for (int i = 0; i < e/3; i++){
    	cin >> a >> b >> c;
    	tr[a - 1].insert(b - 1);
    	tr[a - 1].insert(c - 1);
    	tr[b - 1].insert(a - 1);
    	tr[b - 1].insert(c - 1);
    }
    for (int i = 0; i < m; i++)
    	if (!tr[am[i][0]].count(am[i][1]) && !tr[am[i][1]].count(am[i][0])) t++;
    
    for(int i  = 0; i < d; i++){
    	if (tr[in[i][0]].count(in[i][1]) || tr[in[i][1]].count(in[i][0])) t++;
    }
    cout << t;
}