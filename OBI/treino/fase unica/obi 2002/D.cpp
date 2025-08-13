#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q = 0, k, z;
	vector <int> arr(16, 0);
	arr[0] = 4;
	for (int i = 1; i <= 15; i++){
		k = arr[i - 1], z = sqrt(arr[i - 1]);
		k += k * double(double(z - 1)/z);
		k += k * double(double(z - 1)/z);
		arr[i] = k;
	} 
	while (true){
		cin >> n;
		q++;
		if (n == -1) return 0;
		cout << "Teste " << q << "\n" << arr[n] << "\n\n";
	}
}