#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
#define ll long long
#define mset multiset
	
int main() 
{	
	int n, m, a,idx;
	mset <int> tk;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a;
		tk.insert(a);
	}
	for (int i = 0; i < m; i++){
		cin >> a;
		auto it = tk.upper_bound(a);
		if (it == tk.begin()) cout << -1 << "\n";
		else {
			it--;
			cout << *it << "\n";
			tk.erase(it);
		}
	}
	
}