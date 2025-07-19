#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
	
int main() 
{	
	vector <int> arr;
	int n, m, t = 0, a;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	int i = 0, j = n - 1;
	while (i <= j){
		t++;
		if (arr[i] + arr[j] <= m) i++;
		j--; 
	}
	cout << t;
}