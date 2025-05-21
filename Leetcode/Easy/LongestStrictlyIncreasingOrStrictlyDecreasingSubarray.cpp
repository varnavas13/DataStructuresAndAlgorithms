class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int mxlis=1,cur=1;
       for(int i=1;i<nums.size();++i)
       {
        if(nums[i]>nums[i-1])
        {
            cur++;
            mxlis=max(mxlis,cur);
        }
        else
        cur=1;
       }
       int mxlds=1;
       cur=1;
        for(int i=1;i<nums.size();++i)
       {
        if(nums[i]<nums[i-1])
        {
            cur++;
            mxlds=max(mxlds,cur);
        }
        else
        cur=1;
       }
       return max(mxlds,mxlis);
    }
};
