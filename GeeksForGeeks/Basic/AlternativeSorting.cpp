class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
            vector<int>ans(arr.size());
            sort(arr.begin(),arr.end());
            int lo=0;int hi=arr.size()-1;
            int indx=0;
            while(lo<hi)
            {
                ans[indx++]=arr[hi--];
                ans[indx++]=arr[lo++];
            }
            if(arr.size()%2==1)
            ans[indx]=arr[lo];
            return ans;
    }
};