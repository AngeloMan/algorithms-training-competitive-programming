class Solution {
public:
    int totalFruit(vector<int>& f) {
        int m = 0, i = 0, j = 0, t = 0;
        unordered_map <int, int> umap;
        while (j < f.size()){
            if (!umap.count(f[j])) umap[f[j]] = 0;
            umap[f[j]]++;
            if (umap[f[j]] == 1) t++;
            while (t > 2){
                umap[f[i]]--;
                if (umap[f[i]] == 0) t--;
                i++;
            }
            m = max(m, j - i + 1);
            j++;
        }
        return m;
    }
};