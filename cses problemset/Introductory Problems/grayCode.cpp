#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> num(n, 0);
	for (int t = 0; t < 1 << n; t++){
		string r = "";
		r += to_string(num[0]);
		for (int i = 0; i < n - 1; i++){
			if (num[i] == num[i + 1]) r += '0';
			else r += '1';
		}
		cout << r << "\n";
		int c = 1, o = n - 1;
		while (c > 0 && o >= 0){
			if (num[o] == 0){
				num[o]++;
				c = 0;
			}
			else num[o] = 0;
			o--;
		}
	}
}