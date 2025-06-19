#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, x, f = -1, l = -1;
        cin >> n >> x;
        for (int j = 0; j < n; j++){
            int v;
            cin >> v;
            if (v == 1){
                if (f == -1) f = j;
                l = j;
            }
        }
        if (l - f < x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}