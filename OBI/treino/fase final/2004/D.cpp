#include <bits/stdc++.h>
using namespace std;

void solve(int m, int n){
    vector <vector <int>> mt(m, vector <int> (n));
    for (int i = 0; i < m; i++){
        for (int j =0; j < n; j++) cin >> mt[i][j];
    }
    int fi = 0, fj = 0;
    int x, y;
    while (true){
        cin >> x >> y;
        if (x == 0 && y == 0){
            break;
        }
        fi += y;
        fj -= x;
        fi = (fi + m) %m, fj = (fj + n) %n;
    } 
    string r = "";
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j++) r += to_string(mt[(i + fi)%m][(j + fj) % n]) + " ";
        r += "\n";
    }
    cout << r << "\n";

}

int main() {
    int q = 1;
	while (true){
        int n, m;
        cin >> m >> n;
        if (n == 0) break;
        cout << "Teste " << q << "\n";
        solve(m, n);    
        q++;
    }
}