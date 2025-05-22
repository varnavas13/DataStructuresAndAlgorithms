class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        mp[arr[i]]++;
        for(int i=0;i<arr.size();i++)
        {
            for(int k=i+1;k<arr.size();k++)
            {
                if(mp[arr[i]+arr[k]]>0)
                return true;
            }
        }
        return false;
    }
};