class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> primes;
        for (int n: nums){
            if (n % 2 == 0){
                if (!primes.count(2)) primes.insert(2);
                while (n % 2 == 0) n/= 2;
            }
            for (int i = 3; i * i <= n; i+= 2){
                if (!primes.count(i) && n % i == 0) primes.insert(i);
                while (n % i == 0) n/= i;
            }

            if (n != 1 && !primes.count(n)) primes.insert(n);

        }
        return primes.size();
    };
};