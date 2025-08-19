
#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n, z = 0, q = 0, a = 0;
    string l, final = "";
    cin >> m >> n;
    vector <vector <int>> mt(m, vector <int> (n)); 
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n ;j++){
            cin >> mt[i][j];
            if (((i + j) & 1) != (mt[i][j] & 1)) z++;
            if (((i + j + 1) & 1) !=( mt[i][j] & 1)) q++;
        }
    }
    if (q < z) a++;
    for (int i = 0; i < m; i++){
        l = "";
        for (int j = 0; j < n; j++){
            if (((i + j + a) & 1) != (mt[i][j] & 1)) mt[i][j]++;          
            l += to_string(mt[i][j]) + " "; 
        }
        final += l + "\n";
    }
    cout << min(q, z) << "\n" << final;
}
