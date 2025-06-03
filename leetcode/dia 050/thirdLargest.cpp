class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int f = -1, s = -1, t = -1;
        for (int n: arr){
            if (n > f) 
                t = s, s = f, f = n;
            else if (n > s) 
                t = s, s = n;
            else if (n > t) t = n;
        }
        return t;
    }
};