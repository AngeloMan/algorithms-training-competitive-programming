class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> primes(n, true);
        for (int i = 4; i < n; i += 2)
            primes[i] = false;
        int total = 1;
        for (int i = 3; i < n; i+= 2){
            if (primes[i]){
                total += 1;
                if (i <= sqrt(n)){
                    for (int j = i; j < n; j += 2*i)
                        primes[j] = false;
                }
            }
        }
        return total;
    }
};