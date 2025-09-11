#include <bits/stdc++.h>
using namespace std;

bool solve(int q){
    int n;
    cin >> n;

    if (n == 0) return false;
    vector <vector <int>> mt(10, vector <int> (6, 0));
    
    for (int k = 0; k < n; k++){
        vector <int> dg(10);
        for (int i = 0; i < 10; i++){
            cin >> dg[i];
        }
        for (int i = 0; i < 6; i++){
            char a;
            cin >> a;
            int v = int(a) - 65;
            mt[dg[(v << 1)]][i] ++;
            mt[dg[(v << 1) + 1]][i] ++;
        }
        int p = 0;
    }
    string r = "";
    for (int j = 0; j < 6; j++){
        int m = -1, v = -1;
        for (int i = 0; i < 10; i++){
            if (mt[i][j] > m) {
                m = mt[i][j];
                v = i;
            }
        }
        r += to_string(v) + " ";
    }
    cout << "Teste " << q << "\n" <<r << "\n\n";
    
    return true;
}

int main() {
  int q = 0;
	while (true){
	      q++;
        bool keep = solve(q);
        if (!keep) break;
    }
}