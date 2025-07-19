#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
	
int main() 
{	
	int n, m, k, a;
	vector <int> ps;
	vector <int> ap;
	cin >> n >> m >> k;
	for (int i = 0; i < n;i++){
		cin >> a;
		ps.push_back(a);
	}
	for (int i = 0; i < m;i++){
		cin >> a;
		ap.push_back(a);
	}
	sort(ps.begin(), ps.end());
	sort(ap.begin(), ap.end());
	int i = 0, j = 0, t = 0;
	while (i < n && j < m){
		if (abs(ps[i] - ap[j]) <= k){
			t++, i++, j++;
		}
		else if (ps[i] > ap[j]) j++;
		else i++;
	}
	cout << t;
}