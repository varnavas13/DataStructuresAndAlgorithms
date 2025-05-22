
class Solution {
  public:
    void swapKth(int n, int k, vector<int> &arr) {
       swap(arr[k-1],arr[n-1-(k-1)]);
       
    }
};