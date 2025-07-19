#include <iostream>
using namespace std;

int main() 
{
    long long t = 0, l = -1, n, c;
    cin >> n;
    for (long long i = 0; i < n; i++){
        cin >> c;
        if (l != -1 && c < l){
            t += l - c;
        }
        else l = c;
    }
    cout << t;
    return 0;
}