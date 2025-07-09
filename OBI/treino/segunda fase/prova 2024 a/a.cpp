#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    int n;
    cin >> n;
    int a = pow(n - 2, 3), b = pow(n - 2, 2) * 6; 
    cout << a << "\n";
    cout << b << "\n";
    cout << pow(n, 3) - 8 - a - b << "\n";
    cout << 8; 
}