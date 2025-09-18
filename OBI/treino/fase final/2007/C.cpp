#include <bits/stdc++.h>

using namespace std;

bool ok(int i, int j, int m, int n){
    return (i >=0 && j >= 0 && i < m && j < n);
}

int main(){
    int m, n, c, nb, z;
    cin >> m >> n;
    vector <vector <int>> mt(m, vector <int> (n));
    vector <vector <int>> ch(m, vector <int> (n, 1e9));
    for (int i = 0 ;i < m; i++){
        for (int j =0;j < n;j++) cin >> mt[i][j];
    }
    vector <pair<int,int>> dr = {{1,0},{0,1},{-1,0},{0,-1}};
    priority_queue <pair<int, int>> pq;
    pq.push({0, 0});
    ch[0][0] = 0;
    while (!pq.empty()){
        int t = - pq.top().first, a = pq.top().second;
        pq.pop();
        int i = a/n, j = a %n;
        if (a == n * m - 1){
            cout << t << endl;
            return 0;
        }
        if (t == ch[i][j]){
            for (auto d: dr){
                int u = i + d.first, v = j + d.second;
                if (ok(u, v, m, n)){
                    c = (mt[i][j] + t)%10, nb = (mt[u][v] + t)%10;
                    if (c + 1 >= nb && t + 1 < ch[u][v]){
                        pq.push({-t - 1, n * u + v});
                        ch[u][v] = t + 1;
                    }
                    if (c + 1 < nb && 11 - nb < ch[u][v]){
                        pq.push({-11 + nb - t, n * u + v});
                        ch[u][v] = 11 - nb + t;
                    }
                }
            }
        }
    }
}
