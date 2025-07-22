class Solution {
public:
    void solve(int i, vector <vector <int>>& rp, unordered_set <int>& vs, vector <vector<int>> & graph, vector <int> & crr){
        if (i == graph.size() - 1){
            rp.push_back(crr);
            return;
        }
        for (int n: graph[i]){
            if (!vs.count(n)){
                vs.insert(n);
                crr.push_back(n);
                solve(n, rp, vs, graph, crr);
                crr.pop_back();
                vs.erase(n);
            }
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector <vector <int>> rp;
        unordered_set <int> vs;
        vector <int> crr = {0};
        solve(0, rp, vs, graph, crr);
        return rp;
    }
};