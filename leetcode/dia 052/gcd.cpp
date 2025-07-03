class Solution {
public:
    int gcd(int a, int b){
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    int findGCD(vector<int>& nums) {
        int h = INT_MIN, l = INT_MAX;
        for (int n: nums){
            if (n < l) l = n;
            if (n > h) h = n;
        }
        return gcd(h, l);
    }
};