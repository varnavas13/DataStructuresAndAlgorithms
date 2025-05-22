
class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int dif=INT_MAX;
        int ans=0;
        for(int i=0;i<n;++i)
        {
            if(abs(arr[i]-k)<dif||(arr[i]>ans&&abs(arr[i]-k)==dif))
           {
               
               dif=abs(arr[i]-k);
               ans=arr[i];
           }
        }
        return ans;
    } 
};