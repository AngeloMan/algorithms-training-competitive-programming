#include <bits/stdc++.h>
using namespace std;

void dfs(int a, int & c, vector <vector <int>> & gf, vector <vector <int>> & cs, vector <int> & comp){
    comp[a] = c;
    cs[c].push_back(a);
    for (int b: gf[a]){
        if (comp[b] == -1) dfs(b, c, gf, cs, comp);
    }
}

int main() {
	int n, m, a, b, c = 0;
    cin >> n >> m;
    vector <vector <int>> gf(n, vector <int> {});
    vector <unordered_set <int>> gfst(n, unordered_set <int> {});
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        a--; b--;
        gf[a].push_back(b);
        gf[b].push_back(a);
        gfst[a].insert(b);
        gfst[b].insert(a);
    }
    vector <int> comp(n, -1);
    vector <vector <int>> cs;
    for (int i = 0; i < n ; i++){
        if (comp[i] == -1){
            cs.push_back({});
            dfs(i, c, gf, cs, comp);
            c++;
        }
    }
    //for (int i = 0 ; i < n; i++) cout << i + 1 << " " << comp[i] << endl;
    for (int i = 0; i < n; i++){
        if (cs[comp[i]].size() - 1 > gf[i].size()){
            for (int x: cs[comp[i]]){
                if (x != i && !gfst[i].count(x)){
                    cout << min(i, x) + 1 << " " << max(x, i) + 1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
}
