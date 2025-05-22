// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
       unordered_map<int,int> mp;
            int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            ans+=mp[arr[i]+k];
            ans+=mp[arr[i]-k];
            mp[arr[i]]++;
        
            
        }
        return ans;
     
        
    }
};