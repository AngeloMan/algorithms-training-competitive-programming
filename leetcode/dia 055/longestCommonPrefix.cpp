class Solution {
public:
    int lcp(string a, string b){
            int v = min(a.size(), b.size());
            for (int i = 0; i < v; i++){
                if (a[i] != b[i]) return i;
            }
            return v;
    }
    
    vector<int> longestCommonPrefix(vector<string>& words) {
        int n = words.size(), f = 0, s = 0, t =  0;
        if (n == 1) return {0};
        vector <int> mps(n - 1, 0);
        vector <int> result(n, 0);
        
        for (int i = 0; i < n - 1; i++){
            mps[i] = lcp(words[i], words[i + 1]);
            if (mps[i] > f){
                t = s;
                s = f;
                f = mps[i];
            }
            else if (mps[i] > s){
                t = s;
                s = mps[i];
            }
            else if (mps[i] > t) t = mps[i];
        }

        
        int a, b;
        cout << "\n";
        for (int i = 0; i < n; i++){
            if (i == 0){
                if (mps[0] == f) result[i] = s;
                else result[i] = f;
  
            }
            else if (i == n - 1){
                if (mps[n - 2] == f) result[i] = s;
                else result[i] = f;

            }       
            else {
                a = max(mps[i], mps[i - 1]);
                b = min(mps[i], mps[i - 1]);
                result[i] = f;
                if (a == f) result[i] = s;
                if (a == f && b == s) result[i] = t;
                result[i] = max(result[i], lcp(words[i - 1], words[i + 1]));
            }
        }
        return result;
    }
};