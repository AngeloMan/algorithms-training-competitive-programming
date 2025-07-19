#include <iostream>
using namespace std;
#define ll long long

bool solve(ll a){
    for (ll i = 0; i * i <= a; i++){
        if (a % i == 0) return false;
    }
    return true;
}

int main() 
{
    ll n, a;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (solve(a)) cout << "Prime\n";
        else cout << "Not Prime\n";
    }
}