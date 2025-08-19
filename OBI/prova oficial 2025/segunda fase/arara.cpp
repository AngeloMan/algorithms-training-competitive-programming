
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
    cin >> n >> m;
    bool r = m >= n + (n - 1) * 4;
    if (r) cout << "S" << endl;
    else cout << "N";
}
