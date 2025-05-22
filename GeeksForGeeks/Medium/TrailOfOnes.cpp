class Solution {
  public:
   int MOD = 1e9 + 7;
  long long powerMod(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
    int numberOfConsecutiveOnes(int n) {
        vector<long long> dp0(n + 1, 0), dp1(n + 1, 0);
    
    dp0[1] = 1;
    dp1[1] = 1;
    
    for (int i = 2; i <= n; ++i) {
        dp0[i] = (dp0[i - 1] + dp1[i - 1]) % MOD;
        dp1[i] = dp0[i - 1] % MOD;
    }
    
    long long validStrings = (dp0[n] + dp1[n]) % MOD;
    long long totalStrings = powerMod(2, n, MOD);
    
    long long result = (totalStrings - validStrings + MOD) % MOD;
    
    return static_cast<int>(result);
    }
};