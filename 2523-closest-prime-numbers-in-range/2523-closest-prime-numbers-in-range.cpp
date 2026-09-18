class Solution {
public:
vector<bool> sieve(int n) {
        vector<bool> isPrime(n + 1, true);
        if (n >= 0) isPrime[0] = false;
        if (n >= 1) isPrime[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                int j = i * i;
                while (j <= n) {
                    isPrime[j] = false;
                    j += i;
                }
            }
        }
        return isPrime;
    }
    vector<int> closestPrimes(int L, int R) {
        vector<bool> isPrime = sieve(sqrt(R));
        vector<int> basicPrimes;
        for (int i = 2; i < isPrime.size(); i++) {
            if (isPrime[i]) {
                basicPrimes.push_back(i);
            }
        }
        vector<bool> segSieve(R - L + 1, true);
        if (L == 0) {
            segSieve[0] = false;
            if (R >= 1)
                segSieve[1] = false;
        }

        if (L == 1) {
            segSieve[0] = false;
        }
        for (int prime : basicPrimes) {
            int firstMul = (L / prime) * prime;
            if (firstMul < L) {
                firstMul += prime;
            }
            int j = max(firstMul, prime * prime);
            while (j <= R) {
                segSieve[j - L] = false;
                j += prime;
            }
        }
        int prev = -1, a = -1, b = -1, mini = INT_MAX;
for(int i = 0; i < segSieve.size(); i++) {
    if(segSieve[i]) {
        int curr = i + L;
        if(prev != -1 && curr - prev < mini) {
            mini = curr - prev;
            a = prev;
            b = curr;
        }
        prev = curr;
    }
}
return {a, b};
        
    }
};