
#include <bits/stdc++.h>
using namespace std;

int main() {
	while (true){
        int n;
        cin >> n;
        string a, b;
        if (n == 0) break;
        vector <string> arr(n);
        unordered_map <string ,int> umap;
        vector <vector <int>> gf(n, vector <int> {});
        vector <int> f(n, 0);
        for (int i = 0; i < n; i++){
            cin >> a;
            arr[i] = a;
            umap[a] = i;
        }
        queue <int> q; 
        for (int i = 0; i < n; i++){
            int t, z;
            cin >> a >> t;
            z = umap[a];
            f[z] = t;
            if (t == 0) q.push(z);
            for (int j = 0; j < t; j++){
                cin >> b;
                gf[umap[b]].push_back(z);
            }
        }
        string r = "";
        int v;
        while (!q.empty()){
            v = q.front();
            q.pop();
            r += arr[v] + " ";
            for (int nb: gf[v]){
                f[nb]--;
                if (f[nb] == 0) q.push(nb);
            }
        }
        cout << r << "\n";
    }
}
