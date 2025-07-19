#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n, a;
    cin >> n;
    if (n < 4 && n > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    string r = "";
    for (int i = n - 1; i > 0; i-=2){
        r += to_string(i) + " ";
    }
    for (int i = n; i > 0; i-=2){
        a = i;
        if (i - 2 > 0) r += to_string(i) + " ";
    }
    r += to_string(a);
    cout << r;
    
    return 0;
}