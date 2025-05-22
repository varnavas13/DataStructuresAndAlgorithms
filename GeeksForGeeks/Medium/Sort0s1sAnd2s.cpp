class Solution {
  public:
    void sort012(vector<int>& arr) {
        int cnt1=0,cnt0=0,cnt2=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            cnt0++;
            else if(arr[i]==1)
            cnt1++;
            else
            cnt2++;
        }
        for(int i=0;i<cnt0;i++)
        arr[i]=0;
        for(int i=cnt0;i<cnt0+cnt1;i++)
        arr[i]=1;
        for(int i=cnt0+cnt1;i<cnt1+cnt2+cnt0;i++)
        arr[i]=2;
    }
};