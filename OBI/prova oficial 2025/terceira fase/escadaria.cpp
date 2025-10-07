#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> arr(n);
	vector <int> rs(n, 1e9);
	for (int i = 0; i < n;i++){
		cin >> arr[i];
		if (arr[i] != -1) rs[i] = arr[i];
	}
	for (int i = 0; i < n; i++){
		if(arr[i] != -1){
			int l = i - 1, r = i + 1;
			while (l >= 0 && arr[l] == -1){
				rs[l] = min(rs[l], arr[i] + (i - l));
				l--;
			} 
			while (r < n && arr[r] == -1){
				rs[r] = min(rs[r], arr[i] + (r - i));
				r++;
			} 
		}
	}
	for (int i: rs) cout << i << " "; 
}