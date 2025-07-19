#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() 
{
	vector<pair<ll, ll>> mvs;
   	ll n, l = 0, t = 0, a, b;
   	cin >> n;
   	for (int i = 0; i <n ;i++){
   		cin >> a >> b;
   		mvs.push_back(pair <ll, ll> {a, b});
   	}
   	sort(mvs.begin(), mvs.end());
   	for (pair<ll, ll> p: mvs){
   		if (p.first >= l){
   			t++;
   			l = p.second;
   		}
   		else{
   			if (p.second < l) l = p.second;
   		}
   	}
   	cout << t;
    return 0;
}