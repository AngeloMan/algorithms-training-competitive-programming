#include <bits/stdc++.h>

using namespace std;
long long  m = 1e9 + 7;

vector <vector <long long>> mtdot(vector <vector <long long>> & mt){
	vector <vector <long long>> nmt = {{0, 0},{0, 0}};
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			for (int k = 0; k < 2; k++){
				nmt[i][j] += (mt[i][k] * mt[k][j])%m;
				nmt[i][j] %= m;
			}
		}
	}
	return nmt;
}

vector <vector <long long>> mtdot2(vector <vector <long long>> & mt1, vector <vector <long long>> & mt2){
	vector <vector <long long>> nmt = {{0, 0},{0, 0}};
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			for (int k = 0; k < 2; k++){
				nmt[i][j] += (mt1[i][k] * mt2[k][j])%m;
				nmt[i][j] %= m;
			}
		}
	}
	return nmt;
}

vector <vector <long long>> mtpow(vector <vector <long long>> & mt, long long k){
	if (k == 1) return mt;
	if (k == 2) return mtdot(mt);
	if (k % 2 == 0) {
		vector <vector <long long>>  nm = mtpow(mt, k/2);
		nm = mtdot(nm);
		return nm;
	}
	vector <vector <long long>> a = mtpow(mt, k - 1);
	vector <vector <long long>> nm = mtdot2(a ,mt);
	return nm;
}

int main(){
	long long n, r = 0;
	cin >> n;
	if (n == 1){
		cout << "12\n";
		return 0;
	}
	vector <vector<long long>> mt{{2, 2},{2, 3}};
	mt = mtpow(mt, n - 1);
	for (auto l: mt){
		for (long long i: l){
			r += (6 * i)%m;
			r %= m;
		}
	}
	cout << r << endl;
}