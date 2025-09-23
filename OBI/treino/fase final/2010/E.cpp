#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll a, n, b, k = 4 * 1e7, t = 0;
    cin >> a >> n;
    for(int i = 0; i < n; i++){
        cin >> b;
        if (a * b >= k) t++;
    }
    cout << t << endl;
}
