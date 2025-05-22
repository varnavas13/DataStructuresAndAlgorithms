class Solution {
  public:
    int findMin(vector<int>& arr) {
        int mn=arr[0];
        for(int i=1;i<arr.size();i++)
        mn=min(arr[i],mn);
        return mn;
    }
};