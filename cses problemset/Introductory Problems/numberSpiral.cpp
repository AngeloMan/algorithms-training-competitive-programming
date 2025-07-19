#include <iostream>
using namespace std;
#define ll long long
#define REP(i, a, b) for(ll i = a; i < b; i++)

ll diag(ll n){
    return (((2 + (2 + (n - 1) * 2)) * n)/2) + 1;
}

int main() 
{
    ll c, x, y, a;
    cin >> c;
    REP(i, 0, c){
        cin >> x >> y;
        a = diag(max(x - 1, y - 1));
        if (max(x, y) % 2 == 1) cout << a - x + y << endl;
        else cout << a + x - y << endl;
    }
    
    return 0;
} 