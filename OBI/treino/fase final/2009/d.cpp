#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, m, a, b, c, mx = -1, u = -1, v = -1, w = -1;
    cin >> n >> m;
    vector <vector <int>> gf(n + 1, vector <int> (n + 1, 0));
    for (int i = 0; i < m; i++){
        cin >> a >> b >> c;
        gf[a][b] = c;
        gf[b][a] = c;
    }
    for (int i = 1; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k <= n; k++){
                int z = gf[i][j] + gf[i][k] + gf[k][j];
                if (z > mx){
                    mx = z;
                    u = i, v = j, w = k;
                }
            }
        }
    }
    cout << u << " " << v <<  " " << w << endl;
}