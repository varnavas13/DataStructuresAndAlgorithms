class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> st;
        int temp=-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            int sz=st.size();
            st.insert(nums[i]);
            if(st.size()==sz)
            {
                temp=i;
                break;
            }
        }
        if(temp==-1)
        return 0;
        
        temp++;
        return ceil(temp/3.0);
    }
};
