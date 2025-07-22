class Solution {
public:
    vector <bool> primes(int n){
        vector <bool> sieve(n, true);
        for (int i = 4; i < n; i+=2) sieve[i] = false;
        sieve[1] = false, sieve[0] = false;
        if (n > 2){
            for (int i = 3; i < n; i+= 2){
                if (sieve[i]){
                    for (int j = 3 * i; j < n; j += 2 * i) sieve[j] = false;
                }
            }
        }
        return sieve;
    }
    
    long long splitArray(vector<int>& nums) {
        long long n = nums.size(), tp = 0, tn = 0;
        vector <bool> sieve = primes(n);
        for (int i = 0; i < n; i++){
            if (i > 0 && sieve[i]) tp += nums[i];
            else tn += nums[i];
        }
        return abs(tp - tn);
    }
};