#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	
	vector <int> fq(26, 0);
	for (auto c: s){
		fq[(int)c - 65]++;
		if (fq[(int)c - 65] > (n + 1)/2){
			cout << "-1";
			return 0;
		}
	}
	string r = "";
	while (r.size() < n){
		char nc = 'A';
		while ((r.size() == 0 && fq[(int)nc - 65] == 0) || (fq[(int)nc - 65] == 0 || nc == r[r.size() - 1])){
			nc++;
		}
		for (int i = 0; i < 26; i++){
			if (fq[i] == (n + 2 - r.size())/2) nc = (char) i + 65;
		}
		fq[(int)nc - 65]--;
		r += nc;
	}
	cout << r;
	
	
}