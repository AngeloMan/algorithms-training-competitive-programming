#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, m, a, b, c;
    cin >> n >> m;
    vector <vector <int>> arr(n + 1, vector <int> {0,0,0,0});
    for (int i = 1; i <= n; i++)arr[i][3] = i;
    for (int i = 0; i < m; i++){
        cin >> a >> b >> c;
        arr[a][0]--;
        arr[b][1]--;
        arr[c][2]--;
    }
    sort(arr.begin(), arr.end());
    for (auto v: arr){
        if (v[3] != 0) cout << v[3] << " "; 
    }
    cout << "\n";
}