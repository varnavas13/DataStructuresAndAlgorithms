
class Solution {
  public:
   int maxStep(vector<int>& arr) {
        int mx=0;
        int cur=0;
        for(int i=1;i<arr.size();++i)
        {
            if(arr[i]>arr[i-1])
            {
                cur++;
                mx=max(mx,cur);
            }
            else
            cur=0;
        }
        return mx;
    }
};