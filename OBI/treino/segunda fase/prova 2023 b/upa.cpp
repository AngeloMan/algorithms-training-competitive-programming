#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int n, a, b;
    cin >> n;
    vector <int> A(n);
    vector <int> B(n);
    for (int i = 0; i < n; i++){
    	cin >> a >> b;
    	A[i] = a;
    	B[i] = b;
    }
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());  
	
	int t = 0, i = 0, j = 0;
	while (i < n && j < n){
		t = max(t, i + 1 - j);
		i ++;
		while (A[i] >= B[j]) j++; 
 	} 
 	cout << t * 20;
}