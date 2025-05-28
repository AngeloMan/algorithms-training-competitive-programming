class Solution {
public:
    bool validPalindrome(string s) {
        function<bool(int,int,int)> rec = [&](int l, int r, int total) -> bool{
            if (total > 1)
                return false;
            if (l >= r)
                return true;  
            if (s[l] != s[r])
                return rec(l + 1, r, total + 1) || rec(l, r - 1, total + 1);
            else
                return rec(l + 1, r - 1, total);   
        };
        return rec(0, s.size() - 1, 0);
    }
};