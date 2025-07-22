class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector <int> c(n, -1);
        for (int i = 0; i < n; i ++){
            if (c[i] == -1){
                deque <int> q;
                c[i] = 0;
                q.push_back(i);
                while (q.size()){
                    int x = q[0];
                    q.pop_front();
                    for (int v: graph[x]){
                        if (c[v] == -1){
                            c[v] = (c[x] + 1) & 1;
                            q.push_back(v);
                        }
                        else if (c[v] == c[x]) return false;
                    }
                }
            }
        }
        return true;
    }
};