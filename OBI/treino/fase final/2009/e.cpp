#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <vector <int>> gm(n + 1, vector <int> (k + 1, false));
    for (int i = 1; i <=n;i++){
        for (int j = 1; j <= k; j++){
            for (int z = 1; z <= min(k, i) && !gm[i][j]; z++){
                if (z != j && !gm[i-z][z]) gm[i][j] = true;
            }
        }
    }
    for (int i = 1; i <= k; i++){
        if (gm[n][i]){
            cout << "Paula\n";
            return 0;
        }
    }
    cout << "Carlos\n" ;
}