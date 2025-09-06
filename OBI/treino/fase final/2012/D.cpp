#include <bits/stdc++.h>

using namespace std;

int main(){
	int c, n, a, b, t = 0;
	cin >> c >> n;
	priority_queue <int> pq;
	for (int i = 0; i <n; i++){
		cin >> a >> b;
		//cout << a << " " << b << " ";
		//if (!pq.empty()) cout <<  pq.size() << " " << -pq.top() << endl;
		//else cout << endl;
		if (pq.size() < c) pq.push(-(a + b));
		else{
			if (-pq.top() - a > 20) t++;
			pq.push(- b - max(a, -pq.top()));
			pq.pop();
		}
	}
	cout << t << endl;
}