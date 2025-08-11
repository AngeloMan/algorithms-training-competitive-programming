bool crr(pair<int, int> a, pair <int, int> b){
        if (a.first == b.first) return b.second < a.second;
        return b.first > a.first;
    }
class Solution {
public:
    
    long long maxTotal(vector<int>& value, vector<int>& limit) {
        int n = value.size();
        vector <pair<int, int>> arr(n);
        for (int i = 0 ; i < n;i++) arr[i] = {limit[i], value[i]};
        sort(arr.begin(), arr.end(), crr);
        long long t = 0;
        int a = 0, c = 0;
        for (int i = 0; i < n; i++){
            if (arr[i].first > c){
                c = arr[i].first;
                if (a >= c) continue; 
                a = 0;      
            }  
            if (a >= c) continue; 
            t += arr[i].second;
            a++;
        }
        return t;
    }
};