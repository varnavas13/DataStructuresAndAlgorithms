// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
       int temp=arr1.size();
       vector<int> v;
       for(int i=0;i<temp;++i)
       {
           v.push_back(arr1[i]);
           v.push_back(arr2[i]);
           
       }
       sort(v.begin(),v.end());
       return v[temp]+v[temp-1];
      
    }
};