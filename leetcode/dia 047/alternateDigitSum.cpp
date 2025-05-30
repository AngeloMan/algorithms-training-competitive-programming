class Solution {
public:
    int alternateDigitSum(int n) {
        bool s = true;
        int total = 0, len = 0;
        while (n != 0){
            len++;
            if (s){
                total += n % 10;
                s = false;
            }
            else{
                total -= n % 10;
                s = true;
            }
            n /= 10;
        }
        if (len % 2 == 0) return - total;
        return total;
    }
};