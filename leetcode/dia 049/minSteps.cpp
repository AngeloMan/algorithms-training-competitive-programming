class Solution {
public:
    int minSteps(int n) {
        int result = 0, total = 0;
        while (n % 2 == 0){
            total ++;
            n /= 2;
        }
        result += total * 2;
        for (int i = 3; i * i <= n; i += 2){
            total = 0;
            while (n % i == 0){
                total ++;
                n /= i;
            }
            result += total * i;
        }
        if (n != 1) result += n;
        return result;
    }
};