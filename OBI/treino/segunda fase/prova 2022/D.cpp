#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int dijk(int s, int d, int v, vector <vector<vector<int>>> grafo){
	priority_queue <vector<int>> pq;
	pq.push({0, 0, s});
	while (!pq.empty()){
		int ct =  - pq.top()[0], cp = pq.top()[1], c = pq.top()[2];
		if (c == d) return ct;
		pq.pop();
		for (auto neib: grafo[c]){
			if (neib[2] + cp <= v) pq.push({-ct - neib[1], cp + neib[2], neib[0]});
		}
	}
	return -1;
}

int main() {
    int v, n, m, s, d, t, p;
    cin >> v >> n >> m;
    vector <vector<vector<int>>> grafo(n, vector<vector<int>> {});
    for (int i = 0; i < m; i++){
    	cin >> s >> d >> t >> p;
    	grafo[s - 1].push_back({d - 1, t, p});
    	grafo[d - 1].push_back({s - 1, t, p});
    }
    cin >> s >> d;
    s--; d--;
    cout << dijk(s, d, v, grafo);
}