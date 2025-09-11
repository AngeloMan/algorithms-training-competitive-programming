#include <bits/stdc++.h>
using namespace std;

int q = 1;

bool solve(){
    int n;
    cin >> n;
    if (n == 0) return false;
    string a;
    cin >> a;
    vector <vector <int>> ch(n, vector <int> {});
    for (int i = 0; i < n; i++){
        //cout << i << endl;
        int l = i, r = i;
        while (l >= 0 && r < n && a[l] == a[r]){
            //cout << l << " " << r << endl;
            ch[r].push_back(l);
            r++;
            l--;
        }
        l = i - 1, r = i;
        while (l >= 0 && r < n && a[l] == a[r]){
            //cout << l << " " << r << endl;
            ch[r].push_back(l);
            r++;
            l--;
        }
    }
    vector <vector <int>> dp(2, vector <int> (n));
    dp[0][0] = 1;
    dp[1][0] = 1;
    for (int i = 1; i < n; i++){
        dp[0][i] = min(dp[0][i - 1], dp[1][i - 1]) + 1;
        dp[1][i] = dp[0][i];
        for (int nb: ch[i]){
            dp[1][i] = min(dp[1][i], dp[0][nb]);
        }
    }
    cout << "Teste " << q << "\n" << min(dp[0][n - 1], dp[1][n - 1]) << "\n\n";
    q++;
    return true;
}

int main() {
    
	while (true){
        if (!solve()) break;
    }
}