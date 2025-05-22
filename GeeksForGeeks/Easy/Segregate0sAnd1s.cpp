// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
       int cnt1=0;
       int cnt2=0;
       for(int i=0;i<arr.size();++i)
       if(arr[i]==0)
       cnt1++;
       else
       cnt2++;
       for(int i=0;i<cnt1;++i)
       arr[i]=0;
       for(int i=0;i<cnt2;++i)
       arr[i+cnt1]=1;
    }
};