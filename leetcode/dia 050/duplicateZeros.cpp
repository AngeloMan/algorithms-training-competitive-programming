class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int c = 0, n = arr.size();
        for (int n: arr) if (n == 0) c++;
        int w = n - 1 + c, r = n - 1;
        while (r >= 0 && w >= 0){
            if (w < n) arr[w] = arr[r];
            w--;
            if (arr[r] == 0){
                if (w < n) arr[w] = arr[r];
                w--;
            }
            r--;
        }
    }
};
