class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>target)
            break;
            else if(arr[i]==target)
            cnt++;
        }
        return cnt;
    }
};