class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
      int sz=arr.size();
      int ar[sz];
      for(int i=0;i<sz;++i)
      ar[i]=INT_MAX;
      ar[0]=arr[0];
      for(int i=1;i<sz;++i)
      {
          for(int j=1;j<=k;++j)
          {
              if(i-j>=0)
              {
                  ar[i]=min(ar[i],abs(arr[i]-arr[i-j])+ar[i-j]);
              }
          }
      }
      return ar[sz-1]-ar[0];
      
    }
};