#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m = 1e9 + 7;
	cin >> n;
	vector <vector<int>> refs = {{0,1,4,5,6,8},{{7, 10}},{9,11},{2},{3}};
	vector <int> rmap = {0,0,0,0,1,2,3,3,4,4,0,0};
	vector <int> c(12,0);
	vector <int> nw(12,0);
	c[0] = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j < 12; j++){
			for (int k: refs[rmap[j]]){
				nw[j] += c[k];
				nw[j] %= m;
			}
		}
		for (int j = 1; j < 12; j++){
			c[j] = nw[j];
			nw[j] = 0;
		}
		c[0] = 0;
	}
	int r= 0;
	for (int i: refs[0]){
		r += c[i];
		r %= m;
	}
	cout << r;
}