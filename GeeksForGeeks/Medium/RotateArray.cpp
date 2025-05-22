class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
       vector<int> temp;
       d=d%arr.size();
       for(int i=0;i<d;i++)
       temp.push_back(arr[i]);
       for(int i=d;i<arr.size();i++)
       arr[i-d]=arr[i];
       for(int i=0;i<temp.size();i++)
       {
           arr[arr.size()-i-1]=temp[temp.size()-1-i];
       }
       
    }
};