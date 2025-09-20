#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, m, a, r = 0;
    cin >> m >> n;
    vector <int> l(m, -1);
    vector <int> c(n, -1);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a;
            if (i == 0) c[j] = (a - 1)%n;
            if (j == 0) l[i] = (a - 1)/n; 
        }
    }
    string f = "";
    for (int i = 0; i < m; i++){
        while (i != l[i]){
            f+= "L " + to_string(l[i] + 1) +  " " + to_string(i + 1) + "\n";
            swap(l[i], l[l[i]]);
            r ++;
        }
    }
    for (int i = 0; i < n; i++){
        while (i != c[i]){
            f+= "C " + to_string(c[i] + 1) + " " + to_string(i + 1) + "\n";
            swap(c[i], c[c[i]]);
            r++;
        }
    }
    cout << r << "\n" << f;
}