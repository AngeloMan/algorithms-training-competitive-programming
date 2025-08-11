class Solution {
public:
    int a;
    bool keep = false;
    void solve(int z, vector <bool> & vs, vector <int> & dg, vector <int> & c){
        if (z == a){
            long long r = 0, k = 1;
            for (int i = a - 1; i >= 0; i--){
                r += c[i] * k;
                k *= 10;
            }
            if (__builtin_popcount(r) == 1) keep = true; 
            return;
        }
        for (int i = 0; i < a && !keep; i++){
            if (vs[i] && (z != 0 || dg[i] != 0)){
                vs[i] = false;
                c.push_back(dg[i]);
                solve(z + 1, vs, dg, c);
                c.pop_back();
                vs[i] = true;	
            }
            
        }
    }
    bool reorderedPowerOf2(int n) {
        vector <int> dg;
        while (n > 0){
            dg.push_back(n % 10);
            n/= 10;
        }
        a = dg.size();    
        vector <bool> vs(a, true);
        vector <int> c;
        solve(0, vs, dg, c);
        return keep;
    }
};