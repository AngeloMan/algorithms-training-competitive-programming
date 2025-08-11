#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double r = (b - a * c)/a;
    if (r < 0) r = 0;
    cout <<fixed << setprecision(1) << r;
}
