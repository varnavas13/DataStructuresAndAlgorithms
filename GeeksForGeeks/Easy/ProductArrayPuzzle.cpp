// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
       int cnt0=0;
       int mul=1;
       int indx=-1;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]==0)
           {cnt0++;indx=i;}
           else
           mul*=arr[i];
       }
       vector<int>ans;
       if(cnt0>1)
       {
           for(int i=0;i<arr.size();i++)
           ans.push_back(0);
       }
       else if(cnt0==0)
       {
           for(int i=0;i<arr.size();i++)
           ans.push_back(mul/arr[i]);
       }
       else
       {
           for(int i=0;i<arr.size();i++)
           {
               if(i==indx)
               ans.push_back(mul);
               else
               ans.push_back(0);
           }
       }
       return ans;
    }
};