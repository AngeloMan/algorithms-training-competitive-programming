#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; 
	cin >> s;
	vector <int> fq(26, 0);
	for (char c : s) fq[((int) c)  - 65]++;
	int odd = -1;
	for (int i = 0; i < 26; i++){
		if (fq[i] & 1){
			if (odd == -1)	odd = i;
			else {
				cout << "NO SOLUTION";
				return 0;
			}
		}
	}
	string c = "",r = "";
	for (int i = 0; odd != -1 && i < fq[odd]; i++) c += (char)(65 + odd);
	for (int i = 0; i < 26; i++){
		if (!(fq[i]&1)){
			for (int j = 0; j < fq[i] / 2; j++) r += (char)(65 + i);
		}
	}
	string l = r;
	reverse(l.begin(), l.end());
	cout << l + c + r;
}