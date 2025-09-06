#implementacao simples O(mn), porem da pra fazer em O(mlogn) com segmented tree
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n, m, c, i, v;
  cin >> n >> m;

  vector <int> arr(n, 0);
  
  
  for (int q = 0; q < m; q++){
    cin >> c >> i;
    if (c == 3) cout << arr[i] << "\n";
    else{
      cin >> v;
      while (v > 0 && i < n && c == 1){
        arr[i] += v;
        v -= 1;
        i += 1;
      }
      while (v > 0 && i >= 0 && c == 2){
        arr[i] += v;
        v -= 1;
        i -= 1;
      }
    }
  }

}