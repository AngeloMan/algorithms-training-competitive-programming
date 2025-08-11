#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
    int n;
    cin >> n;
    vector <vector<int>> m(n, vector<int> (n, 0));
    for (int i = 0; i <n;i++){
    	for (int j = 0; j < n; j++){
    		if (i + j < n) m[i][j] = min(i, j) + 1;
    		else m[i][j] = n - max(i, j);
    		
    	}
    }
    for (auto v: m){
    	for(auto e: v) cout << e << " ";
    	cout << "\n";
    }
}