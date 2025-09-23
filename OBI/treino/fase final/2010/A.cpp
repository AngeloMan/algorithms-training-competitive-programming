#include <bits/stdc++.h>

using namespace std;

void solve(int n){
	int t = 0;
	if (n < 3){
		cout << 1 << endl;
		return;
	}
	unordered_set <int> st;

	for (int i = 2; i < n; i++){
		int a = i, b= i - 1;
		if (st.count(a)) break;
		if ((n + b)% (a + b) == 0){
			st.insert((n + b)/ (a + b));
			t++;
		}
		
	}
	cout << t << endl;
}

int main(){
	int n, t = 0;
	cin >> n;
	solve(n);
	
}