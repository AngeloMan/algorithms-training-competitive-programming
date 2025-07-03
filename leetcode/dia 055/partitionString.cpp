class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_set <string> st;
        vector <string> r;
        string cr = "";
        for (char c: s){
            cr += c;
            if (!st.count(cr)){
                st.insert(cr);
                r.push_back(cr);
                cr = "";
            }
        }
        if (cr != "" && !st.count(cr)){
                st.insert(cr);
                r.push_back(cr);
                cr = "";
        }
        return r;
    }
};