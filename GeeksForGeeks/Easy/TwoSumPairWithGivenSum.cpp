// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
       unordered_map<int,int> mp;
       for(int i=0;i<arr.size();i++)
       {
           if(mp[arr[i]]>0)
           return true;
           mp[target-arr[i]]=1;
       }
       return false;
    }
};