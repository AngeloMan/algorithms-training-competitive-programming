#include <bits/stdc++.h>
#define ll long long

using namespace std;

// (0) [1] {2}

string solve(){
	string s;
	cin >> s;
	int a = 0, b = 0, c = 0;
	vector <int> q;
	for (int cr: s){
		if (cr == '('){
			a++;
			q.push_back(0);
		}
		else if (cr == '['){
			b++;
			q.push_back(1);
		}
		else if (cr == '{'){
			c++;
			q.push_back(2);
		}
		else if (cr == ')' && a > 0 && q[q.size() - 1] == 0){
			 a--;
			 q.pop_back();
		}
		else if (cr == ']' && b > 0 && q[q.size() - 1] == 1){
			 b--;
			 q.pop_back();
		}
		else if (cr == '}' && c > 0 && q[q.size() - 1] == 2){
			 c--;
			 q.pop_back();
		}
		else return "N\n";
	}
	if (a > 0 || b > 0 || c > 0) return "N\n";
	return "S\n";
}

int main(){
	int n;
	cin >> n;
	for (int t= 0; t < n; t++){
		cout << solve();
	}
}