#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll n, p, q, r, s, x, y, i , j, f = 0;
    cin >> n >> p >> q >> r >> s >> x >> y >> i >> j;
    for (ll k = 1; k <= n; k++){
        f += ((p * i + q* k)%x) * ((r * k + s * j)%y);
    }
    cout << f << endl;
    return 0;
}
