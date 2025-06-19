#include <iostream>
using namespace std;

int main() 
{
    int n, t = 0;
    cin >> n;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            t++;
            if (n / i != i)t++;
        }
    }
    cout << t;
    return 0;
}