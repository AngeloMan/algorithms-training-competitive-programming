#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() 
{
    ll n, a, b, t = 0, s = 0;
    vector <ll> arr;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a >> b;
        t += b;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    for (int v: arr){
        s += v;
        t -= s;
    }
    cout << t;
    return 0;
}