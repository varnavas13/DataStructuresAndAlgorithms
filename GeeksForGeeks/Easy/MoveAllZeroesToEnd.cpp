// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int cnt0=0;
        vector<int>temp;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            cnt0++;
            else
            temp.push_back(arr[i]);
        }
        for(int i=0;i<temp.size();i++)
        arr[i]=temp[i];
        for(int i=0;i<cnt0;i++)
        arr[temp.size()+i]=0;
    }
};