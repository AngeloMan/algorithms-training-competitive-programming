#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	vector <int> nums(n);
	for (int i = 0; i < n; i++) cin >> nums[i];
	cin >> x;
	for (int i: nums) {
		if (i == x){
			cout << "Yes";
			return 0;	
		}
	}
	cout << "No";
}
