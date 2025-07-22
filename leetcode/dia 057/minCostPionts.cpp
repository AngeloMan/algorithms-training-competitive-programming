class Solution {
public:
    int dist(vector <int> p1, vector<int>p2){
        return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);
    }
    int minCostConnectPoints(vector<vector<int>>& p) {
        priority_queue <vector<int>> pq;
        vector <bool> vs(p.size(), false);
        vs[0] = true;
        for (int i = 1; i < p.size();i++) pq.push({-dist(p[0], p[i]), i});
        int t = 0, c = 1;
        while (!pq.empty() || c < p.size()){
        	int d = - pq.top()[0], nb = pq.top()[1];
        	pq.pop();
            if (!vs[nb]){
        		vs[nb] = true;
        		c++;
        		t += d;
        		for (int i = 1; i < p.size();i++){
        			if (!vs[i]) pq.push({-dist(p[nb], p[i]), i});
        		}
        	}
        	
        }
        return t;
    }
};