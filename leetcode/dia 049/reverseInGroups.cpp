
class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int l, r;
        for (int i = 0; i < arr.size(); i += k){
           l = i, r = i + k - 1;
           while (r >= arr.size()) r--;
           while (l < r){
               swap(arr[l], arr[r]);
               l++, r--;
           }
        }
    }
};
