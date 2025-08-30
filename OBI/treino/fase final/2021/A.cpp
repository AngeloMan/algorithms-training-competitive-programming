#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s1 = "", s2 = "";
	for (int i = 0; i < min(n, 5); i++) s1 += "I";
	for (int i = 5; i < n; i++) s2 += "I";
	if (!s1.size()) s1 = "*";
	if (!s2.size()) s2 = "*";
	cout << s1 << "\n" << s2 << endl;
}