class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int cnt=0;
        for(int i=0;i<arr.size();++i)
        {
            for(int k=i+1;k<arr.size();++k)
            {
                for(int j=k+1;j<arr.size();++j)
                {
                            if(abs(arr[i]-arr[k])<=a&&abs(arr[k]-arr[j])<=b&&abs(arr[i]-arr[j])<=c)
                            ++cnt;
                }
            }
        }
        return cnt;
    }
};
