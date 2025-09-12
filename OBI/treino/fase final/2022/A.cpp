
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t = 0;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i <n ;i++){
        cin >> arr[i];
        t+= arr[i];
    }
    t /= n;
    for (int i: arr) cout << t - i << "\n";
}
