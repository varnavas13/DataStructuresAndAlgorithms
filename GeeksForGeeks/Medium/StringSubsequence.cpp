
class Solution {
  public:
  const int MOD = 1e9 + 7;

    int countWays(string s1, string s2) {
        int m = s1.size();
    int n = s2.size();
    
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 0; i <= m; ++i) {
        dp[i][0] = 1;
    }
    
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD;
            } else {
                dp[i][j] = dp[i-1][j] % MOD;
            }
        }
    }
    
    return dp[m][n];
    }
};