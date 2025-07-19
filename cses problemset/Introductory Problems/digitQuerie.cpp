#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll s = 0, n;
    cin >> n;
    ll i = 0;
    while (n > (i + 1) * 9 * pow(10, i) + s){
        s += (i + 1) * 9 * pow(10, i);
        i++;
    }
    ll v = ceil(float(n - s)/(i + 1) + pow(10, i)- 1) , ind = ((n - s)+(i + 1) - 1)%(i + 1);

    cout << to_string(v)[ind] << "\n";
}

int main() 
{ 
    ll x;
    cin >> x;
    for (ll i = 0; i < x; i++){
        solve();
    }
    return 0;
}