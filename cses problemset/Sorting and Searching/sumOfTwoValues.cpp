#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
	
void solve(int n, int x, vector <pair<int, int>> nums){
	for (int i = 0; i < n; i++){
		int target = x - nums[i].first;
		int l = i + 1, r = n - 1;
		while (l <= r){
			int m = (l + r)/2;
			if (nums[m].first == target){
				cout << nums[i].second + 1 << " " << nums[m].second + 1;
				return;
			}
			else if (nums[m].first > target) r = m - 1;
			else l = m + 1; 
		}
	}
	cout << "IMPOSSIBLE";
}
	
int main() 
{	
	int n, x, a;
	cin >> n >> x;
	vector <pair<int, int>> nums;
	for (int i = 0; i < n; i++){
		cin >> a;
		nums.push_back({a, i});
	}
	sort(nums.begin(), nums.end());
	
	solve(n, x, nums);
	return 0;
}
