#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector <bool> sieve(int m){
    vector <bool> sv(m + 1, true);
    for (int i = 4; i <= m; i+= 2) sv[i] = false;
    for (int i = 3; i <= m; i+= 2){
        if (sv[i]){
            for (int j = 3 * i; j <= m; j+= 2 * i) sv[j] = false;
        }
    }
    sv[0] = false, sv[1] = false;
    return sv;
}

bool super(int n, vector <bool> primos){
    while (n > 0) {
        if (!primos[n % 10]) return false;
        n /= 10;
    }
    return true;
}

int main() {
    vector <int> nums;
    int n, m = INT_MIN;
    while (cin >> n){
        nums.push_back(n);
        if (n > m) m = n;
    }
    vector <bool> primes = sieve(m);
    for (int n: nums){
        if (primes[n]){
            if (super(n, primes)) cout << "Super\n";
            else cout << "Primo\n";
        }
        else cout << "Nada\n";
    }
}
