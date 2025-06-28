#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int solve(vector <int> arr){
	int b = arr[0], e = arr[arr.size() - 1];
	sort(arr.begin(), arr.end());
	int i, t = 2, j, k, c;
	i = lower_bound(arr.begin(), arr.end(), b) - arr.begin();
	j = lower_bound(arr.begin(), arr.end(), e) - arr.begin();
	c = i;
	
	while(true){
		if (2 * arr[c] >= e) return t;
		k = upper_bound(arr.begin(), arr.end(), 2 * arr[c]) - arr.begin();
		if (k - 1 >= j) return t;
		if (k - 1 == c) return -1;
		else{
			t++;
			c = k - 1;
		}
	}
	
}

int main() {
	
    int t, n, a;
    cin >> t;
    for (int c = 0; c < t; c++){
    	cin >> n;
    	vector <int> arr(n);
    	for (int i = 0; i < n; i++){
    		cin >> a;
    		arr[i] = a;
    	}
    	cout << solve(arr) << "\n";
    }
    return 0;
}