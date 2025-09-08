#include <bits/stdc++.h>


using namespace std;
#define ll long long
int main(){
    int n, q, a, x, r;
    cin >> n >> q;
    vector <pair<int, int>> cl(n, {0, 0});
    vector <pair<int, int>> ln(n, {0, 0});
    for (int i = 0; i < q; i++){
    	cin >> a >> x;
    	x--;
    	if (a == 1){
    		cin >> r;
    		ln[x] = {r, i};
    	}
    	else if (a == 2){
    		cin >> r;
    		cl[x] = {r, i};
    	}
    	else {
    		unordered_map <int, int> fq;	
    		if (a == 3){
    			int m = ln[x].first;
	    		int f = m, s = ln[x].second;
	    		fq[m] = 0;
    			for (int i = 0; i < n; i++){
	    			if (cl[i].second > s){
	    				if (!fq.count(cl[i].first)) fq[cl[i].first] = 0;
		    			fq[cl[i].first]++;
		    			if (fq[cl[i].first] > fq[m] || fq[cl[i].first] == fq[m] && cl[i].first > m) m = cl[i].first;
	    			}
	    			else{
	    				fq[f]++;
	    				if (fq[f] > fq[m] || fq[f] == fq[m] && f > m) m = f;
	    			}
	    			
	    		}
	    		cout << m << "\n";
    		}
    		if (a == 4){
    			int m = cl[x].first;
	    		int f = m, s = cl[x].second;
	    		fq[m] = 0;
    			for (int i = 0; i < n; i++){
	    			if (ln[i].second > s){
	    				if (!fq.count(ln[i].first)) fq[ln[i].first] = 0;
		    			fq[ln[i].first]++;
		    			if (fq[ln[i].first] > fq[m] || fq[ln[i].first] == fq[m] && ln[i].first > m) m = ln[i].first;
	    			}
	    			else{
	    				fq[f]++;
	    				if (fq[f] > fq[m] || fq[f] == fq[m] && f > m) m = f;
	    			}
	    			
	    		}
	    		cout << m << "\n";
    		}
    		
    	}
    	
    }
}