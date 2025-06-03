class Solution {
public:
    int fib(int n) {
        int result = (pow((1 + sqrt(5))/2, n) - pow((1 - sqrt(5))/2, n))/sqrt(5);
        return result;
    }
};