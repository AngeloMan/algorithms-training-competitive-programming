#include <iostream>
using namespace std;

int main() 
{
    long long n, t = 0, i = 5;
    cin >> n;
    while (n / i > 0){
        t += n/i;
        i *= 5;
        
    } 
    cout << t;
    return 0;
}