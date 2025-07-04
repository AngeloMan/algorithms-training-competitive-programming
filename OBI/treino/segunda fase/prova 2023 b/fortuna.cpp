#include <iostream>
#include <unordered_set>
#include <vector>
#include <deque>


using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
   	int n, m, a, b;
   	cin >> n >> m;
   	vector <vector<int>> fm(n, vector <int> {});
   	vector <pair<int, int>> dd(n, pair<int, int> {0, 0}); 
   	for (int i = 0; i < n; i++){
   		cin >> a >> b;
   		if (i != 0){
   			fm[b - 1].push_back(i);
   			fm[i].push_back(b - 1);
   		}
   		dd[i].first = a;
   	}
   	int x;
   	for (int i = 0; i < m; i++){
   		deque <int> que;
   		unordered_set <int> ust;
   		cin >> x >> a >> b;
   		que.push_back(x - 1);
   		ust.insert(x - 1);
   		while (que.size()){
   			int c = que[0];
   			dd[c].second++;
   			que.pop_front();
   			for (int y: fm[c]){
   				if (!ust.count(y) && dd[y].first <= b && dd[y].first >= a){
   					que.push_back(y);
   					ust.insert(y);
   				}
   			}
   		}
   		 
   	}
   	string r = "";
   	for (int i = 0; i < n - 1; i++) r+= to_string(dd[i].second) + " ";
   	cout << r + to_string( dd[n - 1].second);
}