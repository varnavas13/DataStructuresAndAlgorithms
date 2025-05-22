// User function template for C++

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
       unordered_map<int,int>mp;
       for(int i=0;i<k;i++)
       {
           mp[arr[i]]++;
           if(mp[arr[i]]==2)
           return true;
       }
       for(int i=k;i<arr.size();i++)
       {
           mp[arr[i]]++;
           if(mp[arr[i]]==2)
           return true;
           mp[arr[i-k]]--;
       }
       return false;
    }
};