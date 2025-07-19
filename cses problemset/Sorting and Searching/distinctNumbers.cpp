#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
	
int main() 
{	
	int n, a, t = 1;
	vector <int> nums;
	cin >> n;
	for (int i = 0; i <n; i++){
		cin >> a;
		nums.push_back(a);
	}
	sort(nums.begin(), nums.end());
	for (int i = 1; i < n; i++){
		if (nums[i] != nums[i - 1]) t++;
	}
	cout << t;
}