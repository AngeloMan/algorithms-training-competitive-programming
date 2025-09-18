#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l, t;
    cin >> n >> l;
    vector <int> r(n, 0);
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++) pq.push({0, -i});
    for(int i = 0; i < l; i++){
        int a = - pq.top().first, b = - pq.top().second;
        r[b]++;
        pq.pop();
        cin >> t;
        pq.push({-(a + t), -b});
    }
    string final = "";
    for (int i = 0; i < n; i++) final += to_string(i + 1) + " " + to_string(r[i]) + "\n";
    cout << final << "\n";
}