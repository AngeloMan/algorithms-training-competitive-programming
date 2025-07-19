#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
#define ll long long
vector <int> coins;
int inf = 1e6 + 1;
vector <int> dp(1e6 + 1, -1);
int solution(int x){
	if (x == 0) return 0;
	if (x < 0) return inf;
	if (dp[x] != -1) return dp[x];
	dp[x] = inf;
	for (int c: coins){
		dp[x] = min(dp[x], solution(x - c) + 1);
	}
	return dp[x];
}
	
int main() 
{	
	int n, x, a; 
	cin >> n >> x;
	for (int i = 0; i < n; i++){
		cin >> a;
		coins.push_back(a);
	}
	sort(coins.begin(), coins.end());
	int result = solution(x);
	if (result != -1 && result < inf) cout << result;
	else cout << -1;
}
