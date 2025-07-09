#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int n;
    cin >> n;
    vector <int> nums(n);
   	unordered_set <int> uset; 
    for (int i = 0; i < n; i++) cin >> nums[i];
	int i = 0, j = 0, m  = 1;
	uset.insert(nums[0]);
	while (j < n - 1){
		j++;
		while(uset.count(nums[j])){
			uset.erase(nums[i]);
			i++;
		}
		uset.insert(nums[j]);
		m = max(j - i + 1, m); 
	}
	cout << m;
}	