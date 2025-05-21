class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt0=0;
        int prod=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                cnt0++;
            else
                prod*=nums[i];
        }
        vector<int>ans;
        if(cnt0==0)
        {
            for(int i=0;i<nums.size();i++)
            {
                ans.push_back(prod/nums[i]);
            }
        }
        else if(cnt0>=2)
        {
            for(int i=0;i<nums.size();i++)
                ans.push_back(0);
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                    ans.push_back(prod);
                else
                    ans.push_back(0);
            }
        }
        return ans;
    }
};
