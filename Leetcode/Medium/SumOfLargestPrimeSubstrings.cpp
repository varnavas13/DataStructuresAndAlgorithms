class Solution {
public:
    long long sumOfLargestPrimes(string s) {
        unordered_set<long long> primes;
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                string substring = s.substr(i, j - i + 1);
                long long num = 0;
                bool leadingZero = true;
                for (char c : substring) {
                    if (leadingZero && c == '0') {
                        continue;
                    }
                    leadingZero = false;
                    num = num * 10 + (c - '0');
                }
                if (num <= 1) {
                    continue;
                }
                if (isPrime(num)) {
                    primes.insert(num);
                }
            }
        }
        
        if (primes.empty()) {
            return 0;
        }
        
        vector<long long> uniquePrimes(primes.begin(), primes.end());
        sort(uniquePrimes.begin(), uniquePrimes.end(), greater<long long>());
        
        long long sum = 0;
        int count = min(3, (int)uniquePrimes.size());
        for (int i = 0; i < count; ++i) {
            sum += uniquePrimes[i];
        }
        
        return sum;
    }
    
private:
    bool isPrime(long long num) {
        if (num <= 1) {
            return false;
        }
        if (num <= 3) {
            return true;
        }
        if (num % 2 == 0 || num % 3 == 0) {
            return false;
        }
        for (long long i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
};©leetcode