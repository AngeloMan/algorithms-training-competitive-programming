#include <bits/stdc++.h>

using namespace std;

bool ok(int a, int b, int x){
	return (a <= x && x <= b);
}

int main(){
	int n, a, b, m = 0;
	cin >> n >> a >> b;
	vector <int> arr(n);
	for (int i = 0; i < n ; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n - 1; i++){
		int x = (arr[i] + arr[i + 1])/2;
		if (abs(arr[i] - arr[i + 1])/2 > m && ok(a,b,x)) m = abs(arr[i] - arr[i + 1])/2;	
		if (abs(arr[i] - arr[i + 1])/2 > m && ok(a,b,x + 1)) m = abs(arr[i] - arr[i + 1])/2;
		if (arr[i] <= a && a <= arr[i + 1] && min(abs(a-arr[i]), abs(arr[i + 1] - a)) > m) m = min(abs(a-arr[i]), abs(arr[i + 1] - a));
		if (arr[i] <= b && b <= arr[i + 1] && min(abs(b-arr[i]), abs(arr[i + 1] - b)) > m) m = min(abs(b-arr[i]), abs(arr[i + 1] - b));
		
	}
	if (abs(b > arr[n - 1]) && abs(b - arr[n - 1]) > m){
		m = abs(b - arr[n - 1]);
	}
	if (a < arr[0] && abs(arr[0] - a) > m) m = abs(arr[0] - a);
	cout << m << endl;
}