#include <bits/stdc++.h>

using namespace std;
int n;
unordered_map <int, int> ump;

int solve(int i, int v, vector <vector<int>> & d){
  if (i == n) return 0;
  int nv, m = -1;
  for (int j = 0; j < 6; j++){
    if (d[i][j] == v) nv = d[i][ump[j]];
    if (d[i][j] != v && d[i][ump[j]] != v) m = max(m, d[i][j]);
  }
  return solve(i + 1, nv, d) + m;
}

int main(){
  int r = 0;
  cin >> n;
  vector <vector <int >> d(n, vector <int> (6));
  ump[0]=5,ump[1]=3,ump[2]=4,ump[5]=0,ump[3]=1,ump[4]=2;
  for (int i = 0; i < n; i++){
    for (int j =0; j < 6 ;j++) cin >>  d[i][j];
  }
  for (int i = 0; i < 6; i++){
    int m = -1;
    for (int j= 0; j < 6; j++){
      if (j != i && j != ump[i]) m = max(m, d[0][j]);
    }
    r = max(r, solve(1, d[0][i], d) + m);
  }
  cout << r << endl;
}