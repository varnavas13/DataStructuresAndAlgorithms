// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(vector<int>& arr, int n) {

       int sm=0;
       for(int i=0;i<arr.size();++i)
       sm+=arr[i];
       return n*(n+1)/2-sm;
    }
};