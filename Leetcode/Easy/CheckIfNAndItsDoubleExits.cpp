class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      unordered_map<int,int> mp;
      int cnt=0;
      for(int i=0;i<arr.size();i++)
      {
        mp[arr[i]]++;
        if(arr[i]==0)
        cnt++;

      }
      if(cnt>=2)
      return true;
      for(int i=0;i<arr.size();i++)
      {
        if(mp[arr[i]]>0&&mp[2*arr[i]]>0&&arr[i]!=0)
        return true;
      }
      return false;  
    }
};