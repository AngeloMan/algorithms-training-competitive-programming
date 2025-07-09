#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define ll long long

const ll INF = 1e9;

int dijk(int s, int t, int n, vector<vector<pair<int, int>>>& grafo){
	//vector <bool> wk(n, true);
	vector <int> d(n, 0);
	d[s] = INF;
	priority_queue <vector<int>> pq;
	pq.push({d[s], s});
	while (!pq.empty()){
		int dist = pq.top()[0], crr = pq.top()[1];
		pq.pop();
		if (crr == t) break;
		if (dist == d[crr]){
			for (auto e: grafo[crr]){
				int nw = min(d[crr], e.second);
				if (nw > d[e.first]){
					d[e.first] = nw;
					pq.push({nw, e.first});
				}
			}
		}
	}
	return d[t];
}

int main() {
    int n, b, c, s, t, w;
    cin >> n >> b;
    vector <vector<pair<int, int>>> grafo(n, vector<pair<int, int>> {});
    for (int i = 0; i < b; i++){
    	cin >> s >> t >> w;
    	grafo[s - 1].push_back({t - 1, w});
    	grafo[t - 1].push_back({s - 1, w});
    }
    cin >> c;
    for (int i = 0; i < c; i++){
    	cin >> s >> t;
    	cout << dijk(s - 1, t - 1, n, grafo) << "\n";
    }
}	