#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define ll long long
#define ld long double
#define rep(i, a, b) for (int i=a;i<b;i++)
typedef vector<long long> vll;

int result(vll nums, int i, ll m, ll a, int n){
	if (i == n){
		if (m - a > a) return m - a * 2;
		return a * 2 - m;
	}
	return min(result(nums, i + 1, m, a, n), result(nums, i+ 1, m, a + nums[i], n));
}
	
int main() 
{
	ll n, v, m = 0;
	cin >> n;
	vll nums;
	rep(i, 0, n){
		cin >> v;
		m += v;
		nums.push_back(v);
	}
	cout << result(nums, 0, m, 0, n);
}