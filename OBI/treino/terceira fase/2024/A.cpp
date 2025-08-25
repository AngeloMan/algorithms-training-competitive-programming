#include <bits/stdc++.h>
using namespace std;

int mx = 0, t, n, k;

void solve(int crr,int i, int l, int ct, int cmx, vector <int>& bgd, vector <int> & amgs, vector <int> & ps){
	mx = max(mx, cmx);
	// for (int i: amgs) cout << i << " ";
	// cout << endl;
	//cout << cmx << " " << crr << " " << i << " "  << ct<< "  " << l << endl;
	if (ct == t) return;
	
	
	if (i + 1 < n && !amgs[i + 1] && i + 1 != l){
		amgs[i] = 0; amgs[i + 1] = 1;
		ps[crr]++;
		for (int ncrr = crr; ncrr < k; ncrr++){
			int nl = i;
			if (crr != ncrr) nl = -1;
			// cout << crr << " " << ncrr << endl;
			solve(ncrr, ps[ncrr], nl, ct + 1, cmx - bgd[i] + bgd[i + 1], bgd, amgs, ps);
		}
		amgs[i] = 1; amgs[i + 1] = 0;
		ps[crr]--;
	}
	if (i > 0 && !amgs[i - 1] && i - 1 != l){
		amgs[i] = 0; amgs[i - 1] = 1;
		ps[crr]--;
		for (int ncrr = crr; ncrr < k; ncrr++){
			int nl = i;
			if (crr != ncrr) nl = -1;
			solve(ncrr, ps[ncrr], nl, ct + 1, cmx - bgd[i] + bgd[i - 1], bgd, amgs, ps);
		}
		amgs[i] = 1; amgs[i - 1] = 0;
		ps[crr]++;
	}

}

int main() {
    cin >> n >> k >> t;
    vector <int> bgd(n);
    vector <int> amgs(n);
    vector <int> ps;
    for (int i = 0; i < n; i++) cin >> bgd[i];
    for (int i = 0; i < n; i++){
        cin >> amgs[i];
        if (amgs[i]){
        	mx+= bgd[i];
        	ps.push_back(i);
        }
    }   
    int a = mx;
    // cout << a << endl;
    for (int crr = 0; crr < k; crr ++){
    	solve(crr, ps[crr], -1, 0, a, bgd, amgs, ps);
    }
    reverse(ps.begin(), ps.end());
    for (int crr = 0; crr < k; crr ++){
    	solve(crr, ps[crr], -1, 0, a, bgd, amgs, ps);
    }
    cout << mx << endl;
}