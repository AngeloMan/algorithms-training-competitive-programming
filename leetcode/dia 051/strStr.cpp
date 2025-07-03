class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = -1, l = 0;
        while (l < haystack.size() && i == -1){
            if (haystack[l] == needle[0]){
                int r = l + 1;
                while (r - l < needle.size() && haystack[r] == needle[r - l]) r++;
                if (r - l == needle.size()) i = l;
            }
            l++;
        }
        return i;
    }
};