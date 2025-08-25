#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t= 0;
	cin >> n;
	string s;

	vector <vector<long long>> arr(n, vector<long long> {});
	for (int i = 0; i < n;i++){
		cin >> s;
		int z = s.size();
		for (int j = 0; j < z; j++){
			arr[i].push_back(((int)s[j]) * pow(3, z - j));
			if (j > 0) arr[i][j] += arr[i][j - 1];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n ;j ++){
			vector <long long> a = arr[i];
			vector <long long> b = arr[j];
			if (a.size() > b.size()) swap(a, b);
			bool in = false;
			int la = a.size(), lb = b.size();
			for (int k = la - 1; k < lb && !in; k++){
				cout << "f "<< b[k] << " " << a[la - 1] << endl;
				long long hl = b[k];
				if (k - la >= 0) hl -= b[k - la];
				hl/=pow(3, lb  - 1 - k);
				if (hl == a[la - 1]) in = true;
				cout << "s "<< hl << " " << a[la - 1] << endl;
			}
			if (in) {
				t++;
				cout << i << " " << j << endl;
			}
			if (in && la == lb) t++;
		}
	}
	cout << t << endl;
}
// (hash[last] - hash[begin - 1])/pow(3, word.size() - 1 - last)