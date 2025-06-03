class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int f = -1, s = -1;
        for (int n: arr){
            if (n > f){
                s = f;
                f = n;
            }    
            else if (n > s && n != f){
                s = n;
            }
        }
        return s;
    }
};