#include <iostream>
#include <unordered_set>
#define rep(i, a, b, c) for (int i = a; i < b; i+= c)
#define ll long long
using namespace std;

ll pasum(ll n){
    return ((1 + n) * n)/2;
}

int main() 
{
    unordered_set <ll> st;
    ll n, s;
    cin >> n;
    s = pasum(n);
    if (s % 2 == 1) cout << "NO";
    else{
        if (n % 2 == 0){
            string rs = "";
            cout << "YES" << "\n";
            cout << n/2 << "\n";
            ll l = 1, r = n;
            while (l < r){
                rs += to_string(l) + " " + to_string(r)+ " ";
                l += 2, r -= 2;
            }
            cout << rs << "\n";
            cout << n/2 << "\n";
            l = 2, r = n - 1, rs = "";
            while (l < r){
                rs += to_string(l) + " " + to_string(r)+ " ";
                l += 2, r -= 2;
            }
            cout << rs;
        }
        else {
            string rs = "";
            cout << "YES" << "\n";
            cout << n/2 + 1 << "\n";
            ll l = 1, r = n - 1;
            while (l < r){
                rs += to_string(l) + " " + to_string(r)+ " ";
                l += 2, r -= 2;
            }
            cout << rs << "\n";
            cout << n/2 << "\n";
            l = 2, r = n - 2, rs = "";
            while (l < r){
                rs += to_string(l) + " " + to_string(r)+ " ";
                l += 2, r -= 2;
            }
            cout << rs << n;
        }
        
            
        
    }
    return 0;
}