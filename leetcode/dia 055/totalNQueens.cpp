class Solution {

int t = 0;
vector <bool> c;
vector <bool> d1;
vector <bool> d2;

void search(int i, int n){
    if (i == n){
        t ++;
    } 
    for (int j = 0; j < n; j++){
        if (c[j] || d1[i + j] || d2[i - j + n - 1]) continue;
        c[j] = d1[i + j] = d2[i - j + n - 1] = true;
        search(i + 1, n);
        c[j] = d1[i + j] = d2[i - j + n - 1] = false;
    }
}

public:
    int totalNQueens(int n) {
        c.assign(n, false);
        d1.assign(2 * n - 1, false);
        d2.assign(2 * n - 1, false);
        search(0, n);
        return t;
    }
};