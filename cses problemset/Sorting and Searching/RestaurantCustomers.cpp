#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
	
int main() 
{	
	int n, x, z;
	cin >> n;
	vector <int> a;
	vector <int> b;
	for (int i = 0; i < n; i++){
		cin >> x >> z;
		a.push_back(x);
		b.push_back(z); 
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0, r = 0;
	while(i < n && j < n){
		if (a[i] > b[j]) j++;
		i++;
		r = max(r, i - j);
	}
	cout << r;
}