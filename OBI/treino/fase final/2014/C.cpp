#include <bits/stdc++.h>


using namespace std;
#define ll long long
int main(){
    int n, m;
    cin >> n >> m;
    unordered_set <ll> a;
    for (int i =0;i < n;i++){
    	ll v;
    	cin >> v;
    	a.insert(v);
    }
    unordered_set <ll> b;
    vector <ll> vb(m);
    for (int i = 0; i < m; i++){
    	bool ok = false;
    	cin >> vb[i];
    	if (a.count(vb[i])) ok = true;
    	for (int j = 0; j < i && !ok; j++){
    		if (b.count(vb[i] - vb[j])) ok = true;
    	}
    	b.insert(vb[i]);
    	//cout << vb[i] << " " << ok << endl;
    	if (!ok){
    		cout << vb[i] << "\n";
    		return 0;
    	}
    	
    }
    cout << "sim\n";
}
