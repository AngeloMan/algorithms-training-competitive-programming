class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> first;
        vector<int> sec;
        
        for (int i = 1; i <= sqrt(n); i++){
            if (n % i == 0){
                first.push_back(i);
                if (n / i != i) sec.push_back(n / i);
            }
        }
        k--;
        if (k < first.size()) return first[k];
        if (k - first.size() < sec.size()) return sec[sec.size() - 1 - (k - first.size())];
        return - 1;
    }
};