#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    queue <vector<int>> q;
    vector <string> m;
    int n;
    cin >> n;
    string l;
    vector <vector<int>> r;
    for (int i = 0; i < n; i++){
        vector <int> rl(n, -1);
        r.push_back(rl);
    }
    
    for (int i = 0; i < n; i++){
        cin >> l;
        for (int j = 0; j < n; j++){
            if (l[j] == '0'){
                q.push({i, j});
                r[i][j] = 0;
            }
        }
        m.push_back(l);
    }
    
    while (q.size() > 0){
        vector <int> p = q.front();
        q.pop();
        int i = p[0], j = p[1];
        if (r[i][j] < 8){
            if (i - 1 >= 0 && r[i - 1][j] == -1){
                q.push({i - 1, j});
                r[i - 1][j] = r[i][j] + 1;
            }
            if (j - 1 >= 0 && r[i][j - 1] == -1){
                q.push({i, j - 1});
                r[i][j - 1] = r[i][j] + 1;
            }
            if (i + 1 < n && r[i + 1][j] == -1){
                q.push({i + 1, j});
                r[i + 1][j] = r[i][j] + 1;
            }
            if (j + 1 < n && r[i][j + 1] == -1){
                q.push({i, j + 1});
                r[i][j + 1] = r[i][j] + 1;
            }
    }

    }
    int a;
    for (int i = 0; i < n; i++){
        l = "";
        for (int j = 0; j < n; j++){
            a = r[i][j];
            if (a >= 0) l += to_string(a);
            else l += '9';
        }
        cout << l << '\n';
    }
    
    return 0;
}