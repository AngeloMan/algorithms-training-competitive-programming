//falho 10/100
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n, m, a, b;
	cin >> n >> m;
	vector <vector<int>> gf(n, vector <int> {});
	priority_queue <int> pq;
	vector <bool> l(n, true);
	vector <bool> rmv(n, true);
	for (int i = 0; i < m; i++){
		cin >> a >> b;
		gf[a].push_back(b);
		l[b] = false;
	}
	for (int i = 0; i < n; i++){
		if (l[i]) pq.push(-i);
	}
	if (pq.empty()){
		cout << "*\n";
		return 0;
	}
	while (!pq.empty()){
		int x = - pq.top();
		pq.pop();
		rmv[x] = false;
		cout << x << "\n";
		for (int i: gf[x]){
			if (rmv[i]) pq.push(-i);
		}
	}
	
}