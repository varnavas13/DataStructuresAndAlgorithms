// User function Template for C++

class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &arr,
                                       vector<int> &newInterval) {
                                           arr.push_back(newInterval);
                                           sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int end=arr[0][1],start=arr[0][0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i][0]<=end && arr[i][1]>=end)
            end=arr[i][1];
            else if(arr[i][1]<=end)
            {}
            else
            {
                vector<int>temp(2);
                temp[0]=start;
                temp[1]=end;
                ans.push_back(temp);
                start=arr[i][0];
                end=arr[i][1];
            }
        }
        vector<int>temp(2);
                temp[0]=start;
                temp[1]=end;
                ans.push_back(temp);
                return ans;
        
        // code here
    }
};