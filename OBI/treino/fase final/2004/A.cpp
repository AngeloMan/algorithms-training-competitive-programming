#include <bits/stdc++.h>
using namespace std;

int main() {
    int q = 1;
	while (true){
        int n, u, v;
        cin >> n;
        if (n == 0) break;
        string a, b, r = "";
        cin >> a >> b;
        cout << "Teste " << q << "\n";
        for (int i = 0; i < n; i++){
            cin >> u >> v;
            if ((u + v) & 1) r += b + "\n";
            else r += a + "\n";
        }
        cout << r << "\n";
        q++;
    }
}