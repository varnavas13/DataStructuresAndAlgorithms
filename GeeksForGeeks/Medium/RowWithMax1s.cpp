// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
       int mx=-1,ans=0;
       for(int i=0;i<arr.size();++i)
       {
           int sz=arr[i].size();
           for(int k=0;k<sz;++k)
           {
               if(arr[i][k]==1)
               {
                   if(sz-k>mx)
                   {
                       mx=sz-k;
                       ans=i;
                   }
                   break;
               }
           }
       }
       if(mx==-1)
       return -1;
       return ans;
    }
};