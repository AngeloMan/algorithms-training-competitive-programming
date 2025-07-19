#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
	ll n, k, x, a, b, c;
	cin >> n >> k >> x >> a>> b >> c;
	vector <ll> arr(n);
	arr[0] = x;
	for (int i = 1; i < n;i++){
		arr[i] = (arr[i - 1] * a + b)%c;
	}
	//for (int v: arr)cout << v << " ";
	deque <int> dq;
	ll r = 0;
	for (int i = 0; i < n; i++){
		while (dq.size() > 0 && arr[dq.back()] > arr[i]) dq.pop_back();
		while (dq.size() > 0 && dq.front() <= i - k) dq.pop_front();	
		dq.push_back(i);
		if (i >= k - 1) r^= arr[dq.front()];	
	}
	cout << r;
}	