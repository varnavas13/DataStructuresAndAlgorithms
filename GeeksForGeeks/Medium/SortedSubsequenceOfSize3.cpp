// Function to find three numbers in the given array
// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> left(n), right(n);
        
        for(int i=0;i<n;i++){
            
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            
            left[i] = st.empty() ? -1 : st.top();
            
            st.push(arr[i]);
        }
        
        
        while(!st.empty())  st.pop();
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            
            right[i] = st.empty() ? -1 : st.top();
            
            st.push(arr[i]);
            
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            
            if(left[i]==-1 || right[i]==-1) continue;
            
            ans.push_back(left[i]);
            ans.push_back(arr[i]);
            ans.push_back(right[i]);
            break;
            
        }
        
        return ans;
    }
};