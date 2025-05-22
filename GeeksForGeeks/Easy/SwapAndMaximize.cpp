class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        vector<int>temp(arr.size());
        sort(arr.begin(),arr.end());
        int lo=0;int hi=arr.size()-1;
        int indx=0;
        while(lo<=hi)
        {
            if(lo==hi)
            {
                temp[indx]=arr[lo];break;
            }
            temp[indx++]=arr[lo++];
            temp[indx++]=arr[hi--];
        }
        int sm=abs(temp[0]-temp[temp.size()-1]);
        for(int i=1;i<temp.size();i++)
        sm+=abs(temp[i]-temp[i-1]);
        return sm;
    }
};