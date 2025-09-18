#include <bits/stdc++.h>

using namespace std;

// int main(){
//     int n, l = 0, r = 0, ans = 0, sz = 1, crr = 0;
//     cin >>n;
//     vector <int> arr(n);
//     vector <int> ch(n, 0);
//     for (int i = 0; i <n; i++) cin >> arr[i];
//     while (true){
//         if (ch[r] == 2) break;
//         crr += arr[r];
//         if (sz > n){
//             crr -= arr[l];
//             l = (l + 1)%n;
//             sz--;
//         }
//         if (crr <= 0){  
//             l = (r + 1)%n;
//             sz = 0;
//             crr = 0;
//         }
//         ch[r]++;
//         r = (r + 1)%n;
//         sz++;
//         // cout << l <<  " " << r <<  endl;
//         ans = max(ans, crr);
//     }
//     cout << ans << "\n";
// }

int main(){
    int n, l = 0, rs = 0, crr = 0;
    cin >> n;
    vector <int> arr(2 *n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i + n] = arr[i];
    }
    // for (int i: arr) cout << i << " ";
    for (int r = 0; r < 2 * n; r++){
        crr += arr[r];
        if (r - l + 1 > n){
            crr -= arr[l];
            l++;
        }
        if (crr <= 0 && r >= l){
            crr = 0;
            l = r + 1;
        }
        rs = max(rs, crr);
    }
    cout << rs << "\n";
}