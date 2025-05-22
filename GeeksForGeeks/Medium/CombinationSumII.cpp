//User function Template for C++

class Solution {
  public:
    void getAns(int index, int k, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
        if(k == 0){
            ans.push_back(ds);
            return ;
        }
        for(int i = index; i < arr.size(); i++){
            if(i > index && arr[i] == arr[i-1]) continue;
            if(arr[i] > k) break;
            ds.push_back(arr[i]);
            getAns(i+1, k-arr[i], arr, ds, ans);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> CombinationSum2(vector<int> &arr,int n, int k) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> ds;
        getAns(0, k, arr, ds, ans);
        return ans;
    }
};