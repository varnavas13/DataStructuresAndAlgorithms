class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--)
        {
            int mn=nums[0],indx=0;
            for(int i=1;i<nums.size();i++)
            {
                    if(nums[i]<mn)
                    {
                        mn=nums[i];
                        indx=i;
                    }
            }
            nums[indx]=multiplier*nums[indx];
        }
        return nums;
    }
};