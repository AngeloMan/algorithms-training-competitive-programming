#include <iostream>
using namespace std;

int main() 
{
    int n, a, p = 0, q, w;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == 1) p++;
    }    
    cin >> q >> w;
    if (p <= q && n - p <= w) cout << "S";
    else cout << "N";
}