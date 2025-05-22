class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]]>0)
            cnt+=mp[arr[i]];
            mp[target-arr[i]]++;
        }
        return cnt;
    }
};