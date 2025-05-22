// User function template for C++
class Solution {
  public:
    int countgroup(vector<int>& arr) {
       int x=arr[0];
       for(int i=1;i<arr.size();i++)
       x^=arr[i];
       if(x!=0)
       return 0;
       int ans=0;
       for(int i=1;i<=arr.size()/2;i++)
       {
           int temp=1;
           for(int k=arr.size();k>arr.size()-i;k--)
           {
               temp*=k;
               temp=temp%(1000000007);
               
           }
           for(int k=1;k<=i;k++)
           {
               temp/=k;
               

           }
           ans+=temp;
       }
       return ans;
    }
};