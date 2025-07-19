#include <iostream>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    if (s.size() == 1){
        cout << 1;
        return 0;
    }
    long long m = 0, c = 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i - 1]) c++;
        else c = 1; 
        m = max(m, c);
    }
    
    cout << m;
    return 0;
}