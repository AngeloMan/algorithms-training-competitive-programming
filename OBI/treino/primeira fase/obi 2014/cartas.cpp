#include <iostream>
using namespace std;

int main() 
{
    bool c = true, d = true;
    int l = -1, n;
    for (int i = 0; i < 5; i++){
        cin >> n;
        if (l != -1){
            if (n < l) c = false;
            if (n > l) d = false;
        }
        l = n;
    }
    if (c) cout << "C";
    else if (d) cout << "D";
    else cout << "N";
}