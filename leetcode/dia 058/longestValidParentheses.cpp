class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.size() == 0) return 0;
        vector <int> ps(s.size());
        int t = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(') t++;
            else t--;
            ps[i] = t;
        }
        int m = 0;
        for (int i = 0; i < s.size() - 1; i++){
            if (s[i] != ')'){
                int l = i + 1;
                int last = 0;
                if (i > 0) last = ps[i - 1];
                while (l < s.size() && ps[l] - last >= 0){
                    if (ps[l] - last == 0) m = max(m, l - i + 1);
                    l++;
                }
            }
        }
        return m;
    }
};