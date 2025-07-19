#include <iostream>
#include <cmath>
using namespace std;

int solver(int n, int a, int b, int c){
    if (n == 1){
        cout << a << " " << c << "\n";
        return 0;
    }
    solver(n - 1, a, c, b);
    cout << a << " " << c << "\n";
    solver(n - 1, b, a, c);
    return 0;
}

int main() 
{
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    solver(n, 1, 2, 3);
    return 0;
}