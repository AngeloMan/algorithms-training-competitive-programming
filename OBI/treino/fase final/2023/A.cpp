#include <bits/stdc++.h>

using namespace std;

bool solve(vector <int> arr){
	int m = arr[5], s = 0;
	for (int i: arr) s+= i;
	if (s % 3 != 0 || s/3 != m) return false;
	for (int i = 0; i < 5; i++){
		for (int j = i + 1; j < 5; j ++){
			if (arr[i] + arr[j] == m) return true;
		}
	}
	return false;
}

int main(){
	vector <int> arr(6);
	for (int i = 0; i < 6; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	bool r = solve(arr);
	if (r) cout << "S" << endl;
	else cout << "N" << endl;
}