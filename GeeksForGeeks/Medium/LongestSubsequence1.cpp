
class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        int dp[n];
        for(int i=0;i<n;++i)
        dp[i]=1;
        for(int i=0;i<n;++i)
        {
            for(int k=i+1;k<n;++k)
            {
                if(abs(a[i]-a[k])==1)
                dp[k]=max(dp[k],dp[i]+1);
            }
        }
        int mx=0;
        for(int i=0;i<n;++i)
        mx=max(mx,dp[i]);
        return mx;
    }
};