
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int sz=arr.size();
        if(sz==1)
        return 0;
       if(arr[0]>arr[1])
       return 0;
       for(int i=1;i<arr.size();i++)
       if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
       return i;
       if(arr[sz-1]>arr[sz-2])
       return sz-1;
       return 79;
    }
};