class Solution {
public:
    int commonFactors(int a, int b) {
        int t = 0;
        for (int i = 1; i * i <= min(a, b); i++){
            if (i != sqrt(min(a, b))){  
                if (min(a, b) % i == 0 && max(a, b) % (min(a, b)/i) == 0) t++;
            }
            if (b % i == 0 && a % i == 0) t++;
        }
        return t;
    }
};