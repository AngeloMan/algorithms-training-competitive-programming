#include <bits/stdc++.h>

using namespace std;

int main(){
	int li = 97, n, t = 0;
	vector <int> arr(26, 0);
	for (int i = 2; i <= 9; i++){
		int a = 0;
		if (i ==7 || i == 9) a++;
		for (int j = 0; j < 3 + a; j++){
			arr[li - 97] = i;
			li++;
		}
	}
	string nm, a;
	cin >> nm;
	vector <int> num;
	for (char c: nm) num.push_back((int)c - 48);
	cin >> n;
	for (int i =0 ;i < n; i++){
		cin >> a;
		bool ok = true;
		if (num.size() != a.size()) ok = false;
		for (int i = 0; i < a.size() && ok; i++){
			if (arr[int(a[i]) - 97] != num[i]) ok = false;
		}
		if (ok) t++;
	}
	cout << t << endl;
}