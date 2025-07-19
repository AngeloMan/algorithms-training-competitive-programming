#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long
#define ld long double
#define umap unordered_map
#define rep(i, a, b) for (int i=a;i<b;i++)
typedef vector<string> vs;
ll mod = 1000000007;

ll rec(int i, int j, int n, umap <string, ll>& ch, vs&m){
	if (i >= n || j >= n || m[i][j] == '*') return 0;
    if (i == n - 1 && j == n - 1) return 1;
    string k = to_string(i) + " " + to_string(j);
	if (ch.count(k)) return ch[k];
    ch[k] = rec(i + 1, j, n, ch, m)+ rec(i, j + 1, n, ch, m);
    return ch[k] % mod;
}
	
int main() 
{
	int n;
	string l;
	cin >> n;
	umap <string, ll> ch;
	vs m;
	rep(i, 0, n){
		cin >> l;
		m.push_back(l);
	}
	cout << rec(0, 0, n, ch, m);
}