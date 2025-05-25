class Solution {
private:
    bool isprime(long long num) {
        if (num < 2) return false;
        for (long long i = 2; i * i <= num; ++i)
            if (num % i == 0) return false;
        return true;
    }
public:
    long long sumOfLargestPrimes(string s) {
        unordered_set<long long> primeSet;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            string numstr = "";
            for (int j = i; j < n; ++j) {
                numstr += s[j];
                try {
                    long long num = stoll(numstr);
                    if (isprime(num)) {
                        primeSet.insert(num);
                    }
                } catch (const out_of_range&) {
                    continue;  // Skip numbers that are too large
                }
            }
        }

        vector<long long> primes(primeSet.begin(), primeSet.end());
        sort(primes.rbegin(), primes.rend());

        long long sum = 0;
        for (int i = 0; i < min(3, (int)primes.size()); ++i) {
            sum += primes[i];
        }

        return sum;
    }
};
