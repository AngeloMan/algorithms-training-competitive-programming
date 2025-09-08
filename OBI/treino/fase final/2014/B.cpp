#include <bits/stdc++.h>

using namespace std;

int main(){
    long long l, n;
    cin >> l >> n;
    long long r = pow(l - n + 1, 2) + n - 1;
    cout << r << endl;
    return 0;
}
