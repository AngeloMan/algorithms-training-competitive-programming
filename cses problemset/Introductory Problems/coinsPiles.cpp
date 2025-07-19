#include <iostream>
using namespace std;

int main() 
{
    long double n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        long double y = (2 * b - a)/3;
        long double x = b - 2 * y;
        bool r = y == int(y) & x == int(x) & x >= 0 & y >= 0;
        if (r) cout << "YES" << "\n";
        else cout << "NO" << "\n";        
    }
    return 0;
}