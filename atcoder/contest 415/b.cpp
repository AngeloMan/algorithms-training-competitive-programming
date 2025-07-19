#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	vector <int> pk;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '#') pk.push_back(i + 1);
	}
	for (int i = 0; i < pk.size(); i += 2){
		cout << pk[i] << "," << pk[i + 1] << "\n";
	}
}
