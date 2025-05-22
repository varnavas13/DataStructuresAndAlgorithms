// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int sm=0;
        int mx=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            sm+=arr[i];
            mx=max(mx,sm);
            sm=max(sm,0);
        }
        return mx;
    }
};