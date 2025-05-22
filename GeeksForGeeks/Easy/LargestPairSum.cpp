
class Solution {
  public:
    int pairsum(vector<int> &arr) {
       int mx1=-2,mx2=-2;
       for(int i=0;i<arr.size();++i)
       {
           int temp=mx1;
           mx1=max(mx1,arr[i]);
           if(arr[i]!=mx1)
           mx2=max(mx2,arr[i]);
           else
           mx2=max(mx2,temp);
       }
       return mx1+mx2;
    }
};