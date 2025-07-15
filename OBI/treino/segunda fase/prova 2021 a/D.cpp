#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
    int n, a;
    cin >> n;
    vector <int> cord(n, 0);
    unordered_set <int> st;
    for (int i = 0; i < n; i++){
    	if (i > 0) cord[i] = cord[i - 1] + a;
    	st.insert(cord[i]);
    	cin >> a;
    }
    //for (int i: cord) cout << i << " ";
    int p = a + cord[n - 1];
    if (p % 2 == 0){
    	int sp = p/2;
	    for (int i = 0; i < n; i++){
	    	for (int j = i + 1; j < n; j++){
	    		int t = 0, a, b, s;
	    		a = min(cord[j] - cord[i], p - cord[j] + cord[i]);
				b = sp - a;
				if (a == 0 || b == 0) continue;
				if ((cord[j] + a)%p == cord[i]) s = cord[i];
				if ((cord[i] + a)%p == cord[j]) s = cord[j];
				if ((cord[j] + b)%p == cord[i]){
					s = cord[i];
					swap(a, b);
				}
				if ((cord[i] + b)%p == cord[j]){
					s = cord[j];
					swap(a, b);
				}
				//cout << cord[i] << " " << cord[j] << " " << a << " " << b << " " << s << endl;
				while (t < 2){
					if (t % 2 == 0){
						if (st.count((s + b)%p)){
							s = (s + b)%p;
						}
						else break;
					}
					else {
						if (st.count((s + a)%p)){
							s = (s + a)%p;
						}
						else break;
					}
					t++;
				}
				if (t == 2){
					cout << "S";
					return 0;
				}
	    	}
	    	
	    }
    }
    cout << "N";
}