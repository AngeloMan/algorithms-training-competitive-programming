#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
	stack <int> st;
    int n, a;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
    	cin >> a;
    	arr[i] = a;
    	while (st.size() > 0 && arr[st.top()] >= a) st.pop();
    	if (st.size() == 0) cout << 0 << " ";
    	else cout << st.top() + 1 << " ";
    	st.push(i);
    }
}