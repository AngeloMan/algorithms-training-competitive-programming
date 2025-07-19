#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
#define ll long long
	 
	
int main() 
{	
	int n, a, t = 0;
	cin >> n;
	vector <int> nums(n + 1, -1);
	for (int i = 0; i < n; i ++){
		cin >> a;
		nums[a] = i;
		if (nums[a - 1] == -1 || nums[a - 1] > nums[a]) t++;
	}
	cout << t;
}
