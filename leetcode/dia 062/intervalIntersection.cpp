class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl  ) {
        int n = fl.size(), m = sl.size();
        int i = 0, j = 0;
        vector<vector<int>> r;
        while (i < n && j < m){
            if (fl[i][0] < sl[j][0]){
                if (sl[j][0] <= fl[i][1]){
                    r.push_back({max(sl[j][0], fl[i][0]), min(sl[j][1], fl[i][1])});
                }
                //i++
            }
            else{
                if (sl[j][1] >= fl[i][0]){
                    r.push_back({max(sl[j][0], fl[i][0]), min(sl[j][1], fl[i][1])});
                }
                //j++;
            }
            if (fl[i][1] < sl[j][1]) i++;
            else j++;
        }
        return r;

    }
};