class Solution {
public:
    int addDigits(int num) {
        int current = 0;
        while (num >= 10){
            current = 0;
            while (num > 0){
                current += num % 10;
                num /= 10;
            }
            num = current;
        }
        return num;
    }
};