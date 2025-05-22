class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
            long long gcd=__gcd(A,B);
            vector<long long>ans;
            ans.push_back(A*B/gcd);
            ans.push_back(gcd);
            return ans;
            
    }
};