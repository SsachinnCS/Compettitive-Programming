#include <iostream>
#include <vector>
#include <numeric>

// Function for modular exponentiation to calculate (base^exp) % mod
long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Find the smallest prime p that does not divide k.
    // For k <= 10^9, this prime is guaranteed to be small (at most 29).
    int p = 0;
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for (int prime : primes) {
        if (k % prime != 0) {
            p = prime;
            break;
        }
    }
    
    // This case will not be reached under problem constraints, but is good practice.
    if (p == 0) {
        p = 31;
    }

    // Modular inverse of k mod p using Fermat's Little Theorem: k^(p-2) mod p
    long long k_inv = power(k, p - 2, p);

    for (int i = 0; i < n; ++i) {
        // Calculate the required number of additions, c_i
        // c_i = (-a_i * k_inv) mod p
        long long rem_a = a[i] % p;
        long long neg_rem_a = (p - rem_a) % p;
        long long c = (neg_rem_a * k_inv) % p;

        // Calculate the final value
        long long new_val = a[i] + c * k;
        std::cout << new_val << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}