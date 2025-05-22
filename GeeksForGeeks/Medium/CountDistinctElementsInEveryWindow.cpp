
class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<k;i++)
        {
            if(mp[arr[i]]==0)
            cnt++;
            mp[arr[i]]++;
        }
        ans.push_back(cnt);
        for(int i=k;i<arr.size();i++)
        {
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0)
            cnt--;
            if(mp[arr[i]]==0)
            cnt++;
            mp[arr[i]]++;
            ans.push_back(cnt);
        }
        return ans;
    }
};