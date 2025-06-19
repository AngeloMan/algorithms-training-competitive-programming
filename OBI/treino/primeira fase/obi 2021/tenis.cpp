#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t = 0;
    for (int i = 0; i < 6; i++){
        string n;
        cin >> n;
        if (n == "V") t++;
    }
    if (t > 4) cout << 1;
    else if (t > 2) cout << 2;
    else if (t > 0) cout << 3;
    else cout << -1;
    return 0;
}
