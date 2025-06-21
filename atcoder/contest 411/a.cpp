#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string p;
    int n;
    cin >> p >> n;
    if (p.size() >= n) cout << "Yes";
    else cout << "No";
    
    return 0;
}