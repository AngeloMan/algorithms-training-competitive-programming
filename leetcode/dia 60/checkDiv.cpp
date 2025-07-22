class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n, p = 1, s = 0;
        while (a > 0){
            int b = a % 10;
            a /= 10;
            p *= b;
            s += b;
        } 

        if (n % (s + p) == 0) return true;
        return false;
    }
};