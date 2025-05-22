// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]]%2==1)
            return arr[i];
        }
        return 69;
    }
};