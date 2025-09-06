#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n, a, b, c, d;
	cin >> m >> n >> a >> b >> c >> d;
	vector <vector <int>> ps1 = {{a, b}, {b, a}};
	vector <vector <int>> ps2 = {{c, d}, {d, c}};
	for (auto p1: ps1){
		for (auto p2: ps2){
			if ((m >= (p1[0] + p2[0]) && n >= max(p1[1], p2[1]))
				|| (m >= max(p1[0], p2[0]) && n >= (p1[1] + p2[1]))
			){
				cout << "S\n";
				return 0;
			}
		}
	}
	cout << "N\n";
}