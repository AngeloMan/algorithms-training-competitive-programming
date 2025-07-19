#include <bits/stdc++.h>

using namespace std;

string next(string c){
	int n = c.size() - 1;
	int i = n, j = n;
	while (i > 0 && c[i] <= c[i - 1]) i--;
	while (c[i - 1] >= c[j] && j > i) j--;
	swap(c[i - 1], c[j]);
	while (i >= 0 && n >= 0 && i < n){
		swap(c[i], c[n]);
		i++;
		n--;
	}
	return c; 
}

int main(){
	vector <int> fct(9, 1);
	for (int i = 1; i <= 8; i++) fct[i] *= fct[i - 1] * i;
	
	string s;
	cin >> s;
	vector<int> alfa(26, 0);	
	for (char c: s){
		alfa[static_cast<int>(c) - 97]++;
	}
	int t = fct[s.size()];
	string cr = "";
	for (int i = 0 ; i < 26; i++) {
		t /= fct[alfa[i]];
		for (int j = 0; j < alfa[i]; j++) cr += static_cast<char>(97 + i);
	}
	cout << t << endl;
	for (int i = 0; i < t; i++){
		cout << cr << "\n";
		if (i < t - 1)cr = next(cr);
	}
}