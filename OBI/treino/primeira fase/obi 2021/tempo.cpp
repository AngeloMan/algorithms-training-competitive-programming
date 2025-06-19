#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> avr(110, 0);
    vector <int> msg(110, -1);
    int n, t = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int v;
        string c;
        cin >> c >> v;
        if (c == "T") t += v, sum = 0;
        else{
            t += sum;
            sum = 1;
            if (c == "R") msg[v - 1] = t;
            else{
                avr[v - 1] += t - msg[v - 1];
                msg[v - 1] = 0;
            }
        }

    }
    for (int i = 0; i < 110; i++){
        if (msg[i] == 0) cout << i + 1 << " " << avr[i] << "\n";
        if (msg[i] > 0) cout << i + 1 << " " << -1 << "\n";
    }
}