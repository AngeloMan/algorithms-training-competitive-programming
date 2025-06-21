#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    string s = "", c;
    int n, q, a, b;
    cin >> n >> q;
    vector <string> pc(n, "");
    for (int i = 0; i < q; i++){
        cin >> a >> b;
        b--;
        if (a == 1) pc[b] = s;
        else if (a == 2){
            cin >> c;
            pc[b] += c;
        }
        else{
            s = pc[b];
        }
    }
    cout << s;
    return 0;
}