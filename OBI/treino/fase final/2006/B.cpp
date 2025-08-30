#include <bits/stdc++.h>

using namespace std;

long long fac(int a, int b){
	if (a == 0) return 1e16;
	long long i=0;
	while (a > 0 && a % b == 0){
		a/=b;
		i++;
	}
	return i;
}

int main(){
	int n;
	long long a, b;
	cin >> n;	
	vector <vector <int>> mt(n, vector <int> (n));
	vector <vector<long long>> fa(n, vector <long long>(n));
	vector <vector<long long>> fb(n, vector <long long>(n));
	for (int i = 0; i < n ;i++){
		for (int j = 0; j < n;j++){
			cin >> mt[i][j];
			fa[i][j] = fac(mt[i][j], 2);
			fb[i][j] = fac(mt[i][j], 5);
		}
	}
	
	for (int i = n - 1; i >= 0 ;i--){
		for (int j = n - 1; j >= 0;j--){
			if (i !=n -1 || j != n - 1){
				long long  au = 1e16, av = 1e16, bu = 1e16, bv = 1e16;
				if (i + 1 < n){
					au = fa[i + 1][j];
					bu = fb[i + 1][j];
				}
				if (j + 1 < n){
					av = fa[i][j + 1];
					bv = fb[i][j + 1];
				}
				fa[i][j] += min(au, av);
				fb[i][j] += min(bu, bv);
			}
			  
		}
	}

	cout << min(fa[0][0], fb[0][0]) << "\n";
}